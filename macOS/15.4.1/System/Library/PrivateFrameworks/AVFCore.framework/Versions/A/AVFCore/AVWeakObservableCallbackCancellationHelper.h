@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject {
    NSMutableArray *_callbackRegistrations;
}

- (void)dealloc;
- (id)init;
- (void)addCallbackToCancel:(id)a0;
- (void)cancelAllCallbacks;

@end
