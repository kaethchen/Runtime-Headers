@class AVContentKeySession, NSArray, NSString, NSObject, NSMutableArray;
@protocol TVPContentKeyLoading, OS_dispatch_queue;

@interface TVPContentKeySession : NSObject <AVContentKeySessionDelegate>

@property (retain, nonatomic) AVContentKeySession *contentKeySession;
@property (retain, nonatomic) NSObject<TVPContentKeyLoading> *contentKeyLoader;
@property (copy, nonatomic) id /* block */ offlineKeyGenerationCompletionHandler;
@property (retain, nonatomic) NSArray *offlineKeyIdentifiersInProgress;
@property (retain, nonatomic) NSMutableArray *keyRequestsInProgress;
@property (nonatomic) BOOL offlineKeyGenerationIsForRenewal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contentKeyProcessingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideRenewingContentKeyRequest:(id)a1;
- (void)_loadAVContentKeyRequests:(id)a0 type:(long long)a1 isRenewal:(BOOL)a2;
- (void)finishKeyRequest:(id)a0;
- (id)initWithContentKeyLoader:(id)a0 avAsset:(id)a1;

@end
