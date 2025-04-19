@interface FI_TSlicesInterpreter : NSObject

+ (id)sharedSlicesInterpreter;
+ (id)sliceForRawQueryString:(id)a0;
+ (id)slicesForTag:(id)a0 andLabel:(short)a1;

- (id)searchForRules:(id)a0;
- (id)queryDictionaryForRow:(id)a0 searchSystemFiles:(id *)a1 fileNameOnly:(id *)a2 searchNonFinderFiles:(id *)a3 skipOuterParentheses:(BOOL)a4;
- (void)queryStringDictionaryForCriterion:(id)a0 withDisplayValue:(id)a1 intoDictionary:(id)a2;
- (id)queryStringForParts:(id)a0 searchSystemFiles:(id *)a1 fileNameOnly:(id *)a2 searchNonFinderFiles:(id *)a3 skipOuterParentheses:(BOOL)a4 subRows:(id)a5;
- (id)queryStringForRules:(id)a0 searchSystemFiles:(id *)a1 fileNameOnly:(id *)a2 searchNonFinderFiles:(id *)a3;

@end
