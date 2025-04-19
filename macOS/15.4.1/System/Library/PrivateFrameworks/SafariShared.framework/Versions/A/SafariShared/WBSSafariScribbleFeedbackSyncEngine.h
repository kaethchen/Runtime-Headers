@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSSafariScribbleFeedbackSyncEngine : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)syncScribbleFeedbackUp:(id)a0 withCompletion:(id /* block */)a1;

@end
