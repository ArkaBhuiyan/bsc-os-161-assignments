/*
 * **********************************************************************
 * You are free to add anything you think you require to this file
 */

#include "paintshop_driver.h"

struct queue *orders;

struct semaphore *access_orders;
struct semaphore *access_done;
struct semaphore *order_ready;
struct semaphore *access_tints;

void *done_can[NCUSTOMERS];

int remaining_customers;
