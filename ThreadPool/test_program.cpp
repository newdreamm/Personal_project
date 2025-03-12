﻿#include <iostream>
#include <functional>
#include <thread>
#include <future>
#include <chrono>

#include "threadpool.h"
using namespace std;




/*
pool.submitTask(sum1, 10, 20);
pool.submitTask(sum2, 1 ,2, 3);
   submitTask采用可变参模板编程
*/

int sum1(int a, int b)
{
    this_thread::sleep_for(chrono::seconds(2));    // 增加运行时长

    return a + b;
}
int sum2(int a, int b, int c)
{
    this_thread::sleep_for(chrono::seconds(2));     // 增加运行时长
    return a + b + c;
}
// io线程 
void io_thread(int listenfd)
{

}
// worker线程
void worker_thread(int clientfd)
{

}
int main()
{
    ThreadPool pool;
    pool.setMode(PoolMode::MODE_CACHED);
    pool.start(2);

    future<int> r1 = pool.submitTask(sum1, 1, 2);
    future<int> r2 = pool.submitTask(sum2, 1, 2, 3);
    future<int> r3 = pool.submitTask([](int b, int e)->int {
        int sum = 0;
        for (int i = b; i <= e; i++)
            sum += i;
        return sum;
        }, 1, 10);
    future<int> r4 = pool.submitTask([](int b, int e)->int {
        int sum = 0;
        for (int i = b; i <= e; i++)
            sum += i;
        return sum;
        }, 1, 10);
    future<int> r5 = pool.submitTask(sum2, 1, 2, 3);
    future<int> r6 = pool.submitTask(sum2, 1, 2, 3);
    future<int> r7 = pool.submitTask(sum2, 1, 2, 3);
    future<int> r8 = pool.submitTask(sum2, 1, 2, 3);
    cout << r1.get() << endl;
    cout << r2.get() << endl;
    cout << r3.get() << endl;
    cout << r4.get() << endl;
    cout << r5.get() << endl;
    cout << r6.get() << endl;
    cout << r7.get() << endl;
    cout << r8.get() << endl;

}