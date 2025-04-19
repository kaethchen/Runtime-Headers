@class SUMetadataCache, NSString, NSURL, NSData, NSDate, NSError, NSDictionary, SUProduct;

@interface SUProductLoadOperation : NSOperation {
    NSString *_productKey;
    NSURL *_distributionURL;
    NSData *_distributionData;
    NSDate *_postDate;
    SUProduct *_product;
    NSError *_error;
}

@property (retain) NSDictionary *extraInfo;
@property BOOL shouldBuildCacheOnly;
@property (retain) SUMetadataCache *metadataCache;
@property (retain) NSDictionary *distributionEnv;
@property (retain) NSDictionary *distributionEvaluationMetainfo;
@property (retain) NSURL *sourceCatalogURL;
@property BOOL checkForMacBuddyInstallableTag;

- (void)dealloc;
- (id)description;
- (id)error;
- (id)product;
- (BOOL)_isValidChoice:(id)a0;
- (void)applyIntegrityInformation:(id)a0;
- (BOOL)applyPKMDataByPackageURL:(id)a0;
- (BOOL)evaluateProductForPredicateScan:(BOOL)a0;
- (BOOL)evaluateProductReturningEvalMessages:(id *)a0 predicateScan:(BOOL)a1 evaluateOnly:(BOOL)a2;
- (id)initWithProductKey:(id)a0 distributionURL:(id)a1 distributionData:(id)a2 postDate:(id)a3;

@end
