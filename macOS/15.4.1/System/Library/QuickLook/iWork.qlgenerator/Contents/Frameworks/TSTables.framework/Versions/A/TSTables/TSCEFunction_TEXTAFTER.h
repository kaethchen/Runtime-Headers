@interface TSCEFunction_TEXTAFTER : TSCEFunctionNode

+ (id)evaluateForArgsWithContext:(id)a0 functionSpec:(id)a1 arguments:(const void *)a2;
+ (unsigned short)functionIndex;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSearchString:(id)a0 inSourceString:(id)a1 withOccurrence:(long long)a2 isRegexSearch:(BOOL)a3 isCaseSensitiveRegex:(BOOL)a4 outMatchesFound:(long long *)a5;

@end
