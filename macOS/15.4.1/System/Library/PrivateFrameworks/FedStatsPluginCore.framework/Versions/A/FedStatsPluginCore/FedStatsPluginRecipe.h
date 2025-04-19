@class FedStatsPluginDefaultDonationParameters, NSString, NSDictionary, NSArray;
@protocol FedStatsPluginAssetProviderProtocol;

@interface FedStatsPluginRecipe : NSObject

@property (readonly, nonatomic) id<FedStatsPluginAssetProviderProtocol> assetProvider;
@property (readonly, nonatomic) NSString *recipeIdentifier;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSDictionary *recordMetadata;
@property (retain, nonatomic) NSDictionary *dataTypeContent;
@property (retain, nonatomic) NSString *sqlQuery;
@property (readonly, nonatomic) NSArray *cohortNameList;
@property (readonly, nonatomic) FedStatsPluginDefaultDonationParameters *defaultDonationParameters;

+ (id)recipeWithAssetProvider:(id)a0 error:(id *)a1;
+ (id)recipeWithAssetProvider:(id)a0 recipeIdentifier:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (BOOL)checkDeviceRegionCodeWithError:(id *)a0;
- (id)assetKeysFromCollatedData:(id)a0;
- (id)assetURLsForAssetKeys:(id)a0;
- (BOOL)checkConsentWithError:(id *)a0;
- (id)collateQueryResults:(id)a0;
- (id)evaluateQueryWithError:(id *)a0;
- (id)initWithAssetProvider:(id)a0 recipeIdentifier:(id)a1 clientIdentifier:(id)a2 recordMetadata:(id)a3 dataTypeContent:(id)a4 sqlQuery:(id)a5 cohortNameList:(id)a6 defaultDonationParameters:(id)a7;
- (id)recordCollatedData:(id)a0 assetURLs:(id)a1;
- (id)runRecipeWithError:(id *)a0;

@end
