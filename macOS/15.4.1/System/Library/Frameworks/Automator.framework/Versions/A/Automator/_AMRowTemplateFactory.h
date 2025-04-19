@interface _AMRowTemplateFactory : NSObject

+ (id)_spotlightFriendlyPredicate:(id)a0;
+ (id)generateMetadataDescriptionForPredicate:(id)a0;

- (id)boolRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)compoundPredicateTypes;
- (id)convertToEvaluationPredicateFromComparisonUIPredicate:(id)a0 withItemType:(id)a1;
- (id)convertToEvaluationPredicateFromCompoundUIPredicate:(id)a0 withItemType:(id)a1;
- (id)convertToEvaluationPredicateFromUIPredicate:(id)a0 withItemType:(id)a1;
- (id)falseRowTemplateWithName:(id)a0 andKeyPath:(id)a1 andValueName:(id)a2;
- (id)fileSizeRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)integerRowTemplateWithName:(id)a0 andKeyPath:(id)a1 withMinimum:(long long)a2;
- (id)longStringRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)nonNegativeIntegerRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)numberPredicateOperatorTypes;
- (id)pastDatesRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)pastOrFutureDatesRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)positiveIntegerRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)ratingRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)rowTemplateBestMatchingPredicate:(id)a0 withItemType:(id)a1;
- (id)rowTemplatesForItemType:(id)a0;
- (id)rowTemplatesForRowTemplateFactoryTypes:(struct { id x0; id x1; id x2; } *)a0;
- (id)stringPredicateOperatorTypes;
- (id)stringRowTemplatesWithName:(id)a0 andKeyPath:(id)a1;
- (id)trueRowTemplateWithName:(id)a0 andKeyPath:(id)a1 andValueName:(id)a2;

@end
