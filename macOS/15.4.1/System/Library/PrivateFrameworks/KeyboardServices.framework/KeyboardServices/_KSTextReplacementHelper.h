@interface _KSTextReplacementHelper : NSObject

+ (id)errorWithCode:(long long)a0 description:(id)a1;
+ (id)multipleAddErrors:(id)a0 removeErrors:(id)a1;
+ (void)fetchConfigurationPlistIfNeeded;
+ (id)aggdPrefix;
+ (id)appleLanguagesPreference;
+ (id)errorStringForCode:(long long)a0;
+ (id)errorWithCode:(long long)a0 failedAdds:(id)a1 failedDeletes:(id)a2;
+ (id)errorWithCode:(long long)a0 forEntry:(id)a1;
+ (void)extractAggdMetricsForTextReplacement:(id)a0;
+ (id)fetchConfigurationPlist;
+ (void)logAggdValueForSyncIsPull:(BOOL)a0 success:(BOOL)a1;
+ (void)logPhraseWordCount:(long long)a0;
+ (id)sampleShortcut;
+ (id)textReplaceEntryFromTIDictionaryValue:(id)a0;
+ (id)transactionFromTextReplacementEntry:(id)a0 forDelete:(BOOL)a1;
+ (long long)validateTextReplacement:(id)a0;

@end
