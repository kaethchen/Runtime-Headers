@class NSObject;
@protocol OS_dispatch_semaphore;

@interface VSSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (id)init;
- (void).cxx_destruct;
- (void)signal;
- (void)wait;

@end
