#pragma once

#include "px4_workqueue.h"

#include <functional>
#include <sys/types.h>
#include <stdint.h>


std::function<int(int, work_s *, worker_t, void *, uint32_t)> stub_work_queue_callback =
[](int, work_s *, worker_t, void *, uint32_t) {return 0;};
std::function<int(int, work_s *)> stub_work_cancel_callback = [](int, work_s *) {return 0;};
std::function<int(void)> stub_px4_shutdown_lock_callback = []() {return 0;};
std::function<int(void)> stub_px4_shutdown_unlock_callback = []() {return 0;};
std::function<int(pthread_cond_t *, pthread_mutex_t *)> stub_pthread_cond_wait_callback =
[](pthread_cond_t *, pthread_mutex_t *) {return 0;};
