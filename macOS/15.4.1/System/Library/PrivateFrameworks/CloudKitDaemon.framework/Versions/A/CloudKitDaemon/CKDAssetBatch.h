@class CKDAssetTokenRequest, NSArray, NSDictionary, NSData, CKDAssetZone;

@interface CKDAssetBatch : NSObject

@property (readonly, nonatomic) NSArray *assetRecords;
@property (readonly, nonatomic) CKDAssetZone *assetZone;
@property (retain, nonatomic) NSData *authPutRequest;
@property (retain, nonatomic) NSData *authPutResponse;
@property (retain, nonatomic) NSDictionary *authPutResponseHeaders;
@property (nonatomic) BOOL isFailed;
@property (weak, nonatomic) CKDAssetTokenRequest *assetTokenRequest;
@property (readonly) unsigned int sizeUpperBound;
@property (readonly) unsigned int size;
@property (readonly, nonatomic) NSArray *allMMCSItems;
@property (readonly, nonatomic) NSArray *allMMCSSectionItems;
@property (readonly, nonatomic) NSArray *allRereferenceMMCSPackageItems;
@property (nonatomic) BOOL useMMCSEncryptionV2;
@property (readonly, nonatomic) NSArray *allRegularAndSectionAndRereferenceItems;

- (id)description;
- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addAssetRecord:(id)a0;
- (BOOL)isEmptyOfAssets;
- (id)allMMCSAndSectionItems;
- (void)failIfNotDoneAllRegularAndSectionAndRereferenceItemsWithError:(id)a0;
- (id)firstMMCSItemError;
- (id)initWithAssetZone:(id)a0;
- (BOOL)isEmptyOfRereferencesAssets;
- (BOOL)isPackageSectionBatch;
- (BOOL)isRereferenceAssetBatch;

@end
