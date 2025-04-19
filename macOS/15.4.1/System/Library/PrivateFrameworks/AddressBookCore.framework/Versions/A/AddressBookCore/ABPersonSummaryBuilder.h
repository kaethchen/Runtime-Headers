@class NSString, NSArray, NSDictionary, NSMutableArray, ABPropertySummaryBuilder;

@interface ABPersonSummaryBuilder : NSObject <ABRecordSummaryBuilding> {
    NSArray *_properties;
    NSDictionary *_propertiesAndTypes;
    NSMutableArray *_summaries;
    ABPropertySummaryBuilder *_propertySummaryBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)_buildSummariesOfPropertiesOnPerson:(id)a0;
- (void)_cachePropertiesAndTypes;
- (id)_ignoredProperties;
- (id)_summaryForProperty:(id)a0 onPerson:(id)a1;
- (id)buildSummaryOfRecord:(id)a0;

@end
