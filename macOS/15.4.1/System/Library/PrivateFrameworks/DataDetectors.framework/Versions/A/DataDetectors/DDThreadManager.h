@class NSOperationQueue;

@interface DDThreadManager : NSObject {
    NSOperationQueue *_queue;
    BOOL _stopping;
}

- (id)init;
- (void).cxx_destruct;
- (void)deactivate;
- (void)cancelOperationForIdentifier:(id)a0;
- (id)queueTextToScanInController:(id)a0 identifier:(id)a1 delegate:(id)a2 retryCount:(int)a3;

@end
