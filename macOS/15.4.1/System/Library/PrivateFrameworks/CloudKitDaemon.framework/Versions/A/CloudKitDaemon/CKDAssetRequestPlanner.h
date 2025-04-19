@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject

@property (retain) NSArray *assetRegisterAndPutBatches;
@property (retain, nonatomic) NSArray *assetTokenRequests;
@property (retain, nonatomic) NSMutableOrderedSet *items;
@property (retain, nonatomic) NSMutableDictionary *assetZoneByKey;
@property (retain, nonatomic) NSMutableDictionary *assetBatchesByZoneID;
@property (retain, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID;
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (BOOL)hasSuccessfulAssetTokenRequests;
- (void)addMMCSItem:(id)a0;
- (void)addMMCSSectionItem:(id)a0;
- (void)addRereferencedPackageItem:(id)a0;
- (void)failBatch:(id)a0;
- (BOOL)hasSuccessfulBatches;
- (id)initWithAssetTokenRequestSizeLimit:(unsigned int)a0;
- (void)planAssetRequests;
- (void)planRegisterBatches;
- (void)resetAssetTokenRequests;

@end
