@class NSArray;

@interface _AMiTunesItemsRowTemplateFactory : _AMRowTemplateFactory

@property (class, readonly, nonatomic) _AMiTunesItemsRowTemplateFactory *sharedInstance;
@property (class, readonly, nonatomic) NSArray *validKeyPathsForPredicate;

- (id)bitRateRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)a0 withItemType:(id)a1;
- (id)iTunesSourceKindRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)rowTemplatesForItemType:(id)a0;
- (id)sampleRateRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)specificYearRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)timeIntervalRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;

@end
