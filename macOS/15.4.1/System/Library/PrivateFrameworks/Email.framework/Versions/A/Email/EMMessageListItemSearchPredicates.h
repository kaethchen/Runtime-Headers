@interface EMMessageListItemSearchPredicates : NSObject

+ (id)spotlightBodySearchPredicateForValue:(id)a0;
+ (id)spotlightQueryPredicateForString:(id)a0;
+ (id)spotlightRecipientSearchPredicateForValue:(id)a0 operator:(unsigned long long)a1;
+ (id)spotlightSearchPredicateForValue:(id)a0;
+ (id)spotlightSenderSearchPredicateForValue:(id)a0 operator:(unsigned long long)a1;
+ (id)spotlightSubjectSearchPredicateForValue:(id)a0 operator:(unsigned long long)a1;
+ (id)spotlightUserQueryStringPredicateForValue:(id)a0;

@end
