@interface CSPersonalAnswersUtils : NSObject

+ (void)dataForLocale:(id)a0;
+ (void)filterCandidateAttributeIntents:(id)a0 withCategoryIntents:(id)a1 attributeIntents:(id)a2;
+ (void)getCategoryAttributeMap;
+ (void)intentsForStringTokens:(id)a0 filteredTokens:(id)a1 categoryIntents:(id)a2 attributeIntents:(id)a3 locale:(id)a4;
+ (void)processIntentSet:(id)a0 withPhrase:(id)a1 filteredTokens:(id)a2 categoryIntents:(id)a3 candidateAttributeIntents:(id)a4 hasAmbiguousDateIntent:(BOOL *)a5 hasStartDateIntent:(BOOL *)a6 hasEndDateIntent:(BOOL *)a7;

@end
