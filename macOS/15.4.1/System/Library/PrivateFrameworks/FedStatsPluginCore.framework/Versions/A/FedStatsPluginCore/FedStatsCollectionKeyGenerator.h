@class NSString, NSArray;

@interface FedStatsCollectionKeyGenerator : NSObject

@property (readonly, copy) NSString *prefix;
@property (readonly, copy) NSArray *cohortKeys;
@property (readonly, copy) NSArray *requiredFields;
@property (readonly, copy) NSArray *unifiedFields;
@property (readonly, copy) NSString *namespaceIdentifier;
@property (readonly, copy) NSString *experimentIdentifier;
@property (readonly, copy) NSString *treatmentIdentifier;
@property (readonly, copy) NSString *deploymentIdentifier;

+ (id)extractCohortKeyValuesFrom:(id)a0;

- (void).cxx_destruct;
- (id)generateCollectionKeyForDataPoint:(id)a0 error:(id *)a1;
- (id)initWithPrefix:(id)a0 cohortKeys:(id)a1 requiredFields:(id)a2 assetProvider:(id)a3 recipeIdentifier:(id)a4;

@end
