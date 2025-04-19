@interface TabTitleShortener : NSObject

+ (void)warmUp;
+ (id)wordsForTitles:(id)a0;
+ (id)_availableTagSchemesForEnglish;
+ (id)_leadingTruncateTitleWithWords:(id)a0 toFitInWidth:(double)a1 withFont:(id)a2 maximumNumberOfWordsToRemove:(unsigned long long)a3;
+ (unsigned long long)_numberOfCommonLeadingWordsOfWordList:(id)a0 andWordList:(id)a1;
+ (BOOL)_proposedTitleIsEligibleForTruncation:(id)a0;
+ (id)test_titlesAfterLeadingTruncation:(id)a0 toFitInWidth:(double)a1 withFont:(id)a2;
+ (id)titlesForTitlesWordsAfterLeadingTruncation:(id)a0 toFitInWidth:(double)a1 withFont:(id)a2;

@end
