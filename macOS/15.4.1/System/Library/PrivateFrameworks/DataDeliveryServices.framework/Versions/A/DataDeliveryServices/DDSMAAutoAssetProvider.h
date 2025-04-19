@class NSString;

@interface DDSMAAutoAssetProvider : NSObject <DDSMAAutoAssetProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchAssetUpdateStatusDateForAutoAsset:(id)a0;
+ (void)setFetchAssetUpdateStatusDateForAutoAsset:(id)a0;

- (id)autoAssetForAssetSelector:(id)a0;
- (void)eliminateInterestForAutoAsset:(id)a0;
- (void)fetchLockReasonCountForAutoAsset:(id)a0 callback:(id /* block */)a1;
- (void)fetchUpdateStatusForAutoAsset:(id)a0 completion:(id /* block */)a1;
- (void)interestInContentForAutoAsset:(id)a0 completion:(id /* block */)a1;
- (void)lockAutoAsset:(id)a0 forReason:(id)a1 withTimeout:(long long)a2 completion:(id /* block */)a3;
- (id)lockAutoAssetSync:(id)a0 forReason:(id)a1 error:(id *)a2;
- (void)unlockAutoAsset:(id)a0 forReason:(id)a1;
- (void)updateAutoAsset:(id)a0 forReason:(id)a1 completion:(id /* block */)a2;

@end
