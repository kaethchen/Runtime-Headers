@interface CNLDAPQueryFilter : NSObject

+ (id)defaultSearchAttributes;
+ (id)filterStringWithOperator:(id)a0 clauses:(id)a1;
+ (id)filterStringWithSearchTerm:(id)a0 attributes:(id)a1;
+ (id)filterWithSearchString:(id)a0;
+ (id)filterWithSearchString:(id)a0 attributes:(id)a1;
+ (id)tokensFromQueryString:(id)a0;

@end
