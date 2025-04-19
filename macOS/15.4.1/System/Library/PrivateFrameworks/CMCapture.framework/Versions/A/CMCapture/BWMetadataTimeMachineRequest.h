@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BWMetadataTimeMachineRequest : NSObject {
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

- (void)dealloc;
- (id)init;
- (void)complete;
- (void)waitForCompletionWithTimeout:(float)a0;

@end
