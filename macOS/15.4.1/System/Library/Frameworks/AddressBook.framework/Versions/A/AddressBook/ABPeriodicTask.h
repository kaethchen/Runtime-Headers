@class NSObject;
@protocol OS_dispatch_source;

@interface ABPeriodicTask : CNTask {
    id /* block */ _task;
    NSObject<OS_dispatch_source> *_source;
    double _interval;
}

+ (id)targetQueue;
+ (id)taskWithInterval:(double)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (BOOL)cancel;
- (id)run:(id *)a0;
- (id)initWithName:(id)a0 interval:(double)a1 task:(id /* block */)a2;

@end
