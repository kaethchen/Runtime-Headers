@class NSMutableDictionary;

@interface PESCAPReviewManager : NSObject {
    NSMutableDictionary *_assetsMap;
}

@property (class, readonly, nonatomic) PESCAPReviewManager *sharedReviewManager;

- (id)init;
- (void).cxx_destruct;
- (void)clearAll;
- (id)lastPasteBreadcrumb;
- (id)payloadForAsset:(id)a0;
- (void)registerPayload:(id)a0 forAsset:(id)a1;

@end
