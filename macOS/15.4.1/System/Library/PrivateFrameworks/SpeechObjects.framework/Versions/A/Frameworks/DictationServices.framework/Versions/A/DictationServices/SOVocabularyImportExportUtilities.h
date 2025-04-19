@interface SOVocabularyImportExportUtilities : NSObject

+ (unsigned long long)importVocabularyEntries:(id)a0 didFindOverflow:(BOOL *)a1;
+ (id)localeIdentifiersRepresentedByVocabularyEntries:(id)a0;
+ (unsigned long long)maximumNumberOfAllowedEntries;
+ (id)stringContainingSimpleTextListOfCurrentVocabulary;
+ (id)stringContainingSimpleTextListOfCurrentVocabularyMatchingLocaleIdentifiers:(id)a0;
+ (id)stringsFromCurrentVocabularyMatchingLocaleIdentifier:(id)a0;
+ (id)vocabularyEntriesFromSimpleTextListString:(id)a0 usingLocaleIdentifier:(id)a1;

@end
