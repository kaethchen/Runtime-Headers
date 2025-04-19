@class NSArray;

@interface _AMMailItemsRowTemplateFactory : _AMRowTemplateFactory

@property (class, readonly, nonatomic) _AMMailItemsRowTemplateFactory *sharedInstance;
@property (class, readonly, nonatomic) NSArray *validKeyPathsForPredicate;

- (id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)a0 withItemType:(id)a1;
- (id)mailAccountTypeRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)rowTemplatesForItemType:(id)a0;
- (id)rowTemplatesForMailAccounts;
- (id)rowTemplatesForMailMailboxes;
- (id)rowTemplatesForMailMessages;

@end
