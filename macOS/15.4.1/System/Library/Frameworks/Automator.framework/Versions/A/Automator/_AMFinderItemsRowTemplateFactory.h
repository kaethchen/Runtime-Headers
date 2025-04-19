@class NSArray;

@interface _AMFinderItemsRowTemplateFactory : _AMRowTemplateFactory

@property (class, readonly, nonatomic) _AMFinderItemsRowTemplateFactory *sharedInstance;
@property (class, readonly, nonatomic) NSArray *validKeyPathsForPredicate;

- (id)_convertToEvaluationPredicateFromPathComparisonUIPredicate:(id)a0;
- (id)commonParentOfPaths:(id)a0;
- (id)compoundPredicateTypes;
- (id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)a0 withItemType:(id)a1;
- (id)finderItemsKindEvaluationPredicateForUIPredicate:(id)a0;
- (id)finderItemsKindRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)rowTemplatesForFinderItems;
- (id)rowTemplatesForItemType:(id)a0;
- (id)rowTemplatesWithLeftPopupName:(id)a0 leftKeyPath:(id)a1 operators:(id)a2 rightPopupNames:(id)a3 rightPopupValues:(id)a4;

@end
