@interface SiriSharedUIUtilities : NSObject

+ (id)filterTranscriptItemsForSAEDialogBoxContent:(id)a0;
+ (BOOL)utteranceViewEligibleForLightEffects:(id)a0;
+ (long long)orbViewModeForSiriSessionState:(long long)a0;
+ (id)_emojisToNotInclude;
+ (id)_ineligibleDialogCategoriesForLightEffects;
+ (BOOL)applicationBundleIdentifierIsThirdParty:(id)a0;
+ (id)cardFromSnippet:(id)a0;
+ (BOOL)contentDiffersBetweenItems:(id)a0 andItems:(id)a1;
+ (BOOL)emojiIsValid:(struct __EmojiTokenWrapper { } *)a0;
+ (id)filterTranscriptItemsForRFPluginContent:(id)a0;
+ (id)getAceObjectForSACardSnippetFromTranscriptItems:(id)a0;
+ (long long)orbViewModeForSiriSessionState:(long long)a0 isAttending:(BOOL)a1;
+ (BOOL)reportConcernButtonEnabled;
+ (id)substringRangesContainingEmojiInString:(id)a0;

@end
