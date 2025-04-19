@class NSArray, NSDictionary, NSString, AMSMediaTaskTypeConfig;
@protocol AMSBagProtocol;

@interface AMSMediaTaskURLBuilder : NSObject

@property (retain) NSArray *additionalPlatforms;
@property (retain) NSDictionary *additionalQueryParams;
@property (readonly) id<AMSBagProtocol> bag;
@property (retain) NSArray *bundleIdentifiers;
@property BOOL charts;
@property (readonly) NSString *clientVersion;
@property (readonly) AMSMediaTaskTypeConfig *config;
@property (retain) NSDictionary *filters;
@property (retain) NSArray *includedResultKeys;
@property (retain) NSArray *itemIdentifiers;
@property (retain) NSString *logKey;
@property (retain) NSString *searchTerm;

- (void).cxx_destruct;
- (id)build;
- (void)_addSearchTerm:(id)a0;
- (id)_devicePlatform;
- (id)_languagePromiseAppDistribution;
- (void)_addBundleIdentifiers:(id)a0;
- (void)_addCharts:(id)a0;
- (void)_addItemIdentifiers:(id)a0;
- (id)_hostPromise;
- (id)_languagePromise;
- (id)_languagePromiseForType;
- (id)_pathPromise;
- (id)_queryItemsWithLanguage:(id)a0;
- (id)_verifyConfiguration;
- (id)initWithConfig:(id)a0 clientVersion:(id)a1 bag:(id)a2;

@end
