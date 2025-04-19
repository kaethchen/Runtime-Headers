@class NSObject;
@protocol OS_dispatch_semaphore;

@interface RDSemaphore : NSObject {
    NSObject<OS_dispatch_semaphore> *semaphore;
    int oneShotState;
}

- (void)dealloc;
- (id)init;
- (long long)signal;
- (long long)wait:(unsigned int)a0;
- (id)initWithCount:(long long)a0;
- (id)initAsOneShot;

@end
