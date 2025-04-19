@interface CRFormContentTypeKeywordBasedPredictor : NSObject

+ (id)supportedLanguages;
+ (id)_keywordMapForPriorityKeywords:(BOOL)a0;
+ (id)useKeywordTypes;
+ (unsigned long long)_nonStructuralContentTypeFromType:(unsigned long long)a0;
+ (BOOL)_shouldPredictContentTypeForLabel:(id)a0 locale:(id)a1;
+ (id)lookupLanguagesForLanguage:(id)a0;
+ (unsigned long long)predictContentTypeWithKeywordMatching:(id)a0 locale:(id)a1 keyword:(id *)a2 withPriorityKeywords:(BOOL)a3;

@end
