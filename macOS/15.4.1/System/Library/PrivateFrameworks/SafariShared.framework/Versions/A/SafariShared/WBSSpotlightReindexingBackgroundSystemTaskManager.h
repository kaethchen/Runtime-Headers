@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSSpotlightReindexingBackgroundSystemTaskManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)registerAndSubmitRequestForTask:(id /* block */)a0;

@end
