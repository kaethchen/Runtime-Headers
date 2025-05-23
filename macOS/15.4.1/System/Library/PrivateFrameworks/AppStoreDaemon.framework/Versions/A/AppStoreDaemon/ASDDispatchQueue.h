@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ASDDispatchQueue : NSObject <ASDTaskScheduler> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) ASDDispatchQueue *defaultQueue;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)scheduleBlock:(id /* block */)a0;
- (void)syncUsingBlock:(id /* block */)a0;
- (void)assertQueue;
- (void)asyncUsingBlock:(id /* block */)a0;

@end
