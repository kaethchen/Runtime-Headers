@class NSArray, NSUUID, NSString, NSLocale, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _LTTextSessionRequest : NSObject <_LTInterruptionObserving> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _itemHandler;
    id /* block */ _completionHandler;
    NSMutableDictionary *_resultMap;
    NSLocale *_resolvedSourceLocale;
    NSLocale *_resolvedTargetLocale;
    unsigned long long _signpostID;
    BOOL _hasReceivedFirstItem;
}

@property (readonly, copy, nonatomic) NSArray *batch;
@property (copy, nonatomic) NSLocale *resolvedSourceLocale;
@property (copy, nonatomic) NSLocale *resolvedTargetLocale;
@property (readonly, nonatomic) BOOL isForDownloadRequest;
@property (readonly, copy, nonatomic) NSUUID *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_setQueue:(id)a0;
- (void)_cleanUp;
- (void)didComplete;
- (id)_initWithBatch:(id)a0 sourceLocale:(id)a1 targetLocale:(id)a2 isForDownloadRequest:(BOOL)a3 itemHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)_invocationEndedWithErrorSELFLogging:(id)a0;
- (void)didReceiveError:(id)a0 forInput:(id)a1;
- (void)didReceiveInterruptionFromHandler:(id)a0;
- (void)didStartTranslating;
- (void)didTranslateInput:(id)a0 withResult:(id)a1;
- (id)initForDownloadRequestWithSourceLocale:(id)a0 targetLocale:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithBatch:(id)a0 sourceLocale:(id)a1 targetLocale:(id)a2 itemHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;

@end
