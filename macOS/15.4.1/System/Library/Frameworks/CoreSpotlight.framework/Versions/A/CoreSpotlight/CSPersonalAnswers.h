@interface CSPersonalAnswers : NSObject

+ (id)fetchAttributes;
+ (id)attributeIntentsFromQU:(id)a0;
+ (id)attributesFromIntent:(id)a0;
+ (id)personalAnswersEventIntentForQUOutput:(id)a0;
+ (id)personalAnswersFallbackQueries:(id)a0 queryComponents:(id)a1 searchString:(id)a2 answerAttributeIntents:(id)a3 isShortQuery:(BOOL)a4 locale:(id)a5;
+ (id)structuredFreeTextQueryForTokens:(id)a0 searchString:(id)a1 searchStringTokens:(id)a2 categoryIntents:(id)a3;
+ (id)structuredIntentQueryForCategoryIntents:(id)a0;

@end
