@class NSUUID, NSString, NSMutableDictionary, MAAutoAssetSet, MAAutoAssetSetStatus;

@interface UAFAutoAssetSet : NSObject

@property (retain, nonatomic) MAAutoAssetSet *autoAssetSet;
@property (retain, nonatomic) MAAutoAssetSetStatus *autoAssetSetStatus;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *assetSetName;
@property (retain, nonatomic) NSMutableDictionary *assets;
@property (readonly, nonatomic) BOOL experimentActivated;
@property (retain, nonatomic) NSString *catalogAssetSetID;
@property (retain, nonatomic) NSString *atomicInstance;

+ (id)getClientName;
+ (id)autoAssetEntryToAsset:(id)a0 withAssetName:(id)a1 experimentationEnabled:(BOOL)a2 experimentId:(id)a3;
+ (id)autoAssetSetStatus:(id)a0;
+ (id)getConcurrentQueue;
+ (id)getLockReason:(id)a0;
+ (id)getMapReason:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)mapAsset:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)invalidateWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)assetWithName:(id)a0 autoAssets:(id)a1 experiment:(id)a2;
- (id)getMAAutoAssetDownloadErrorsSync;
- (id)initWithAssetSetName:(id)a0 autoAssets:(id)a1 uuid:(id)a2 experiment:(id)a3 atomicInstance:(id)a4 error:(id *)a5;
- (id)loadAutoAssets:(id)a0 experiment:(id)a1 experimentActivated:(BOOL *)a2;
- (BOOL)lockAutoAssets:(id)a0 error:(id *)a1;

@end
