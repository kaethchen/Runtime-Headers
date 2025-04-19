@interface IMDSpotlightDataProvider : NSObject

+ (id)_createDataProviders;
+ (id)_dataProviders;
+ (id)dataProviderForIdentifier:(id)a0;

- (id)typeIdentifier;
- (id)dataForGUID:(id)a0 error:(id *)a1;

@end
