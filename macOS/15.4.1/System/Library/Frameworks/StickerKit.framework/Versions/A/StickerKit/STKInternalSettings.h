@class NSUserDefaults;

@interface STKInternalSettings : NSObject

@property (class, readonly, nonatomic) NSUserDefaults *defaults;
@property (class, readonly, nonatomic) BOOL runVGFRemoveBackground;
@property (class, readonly, nonatomic) BOOL autoPopulateDebugPrompts;
@property (class, readonly, nonatomic) BOOL bypassPersonCheck;
@property (class, readonly, nonatomic) BOOL disableLanguageCheck;
@property (class, readonly, nonatomic) BOOL disablePromptSafety;
@property (class, readonly, nonatomic) BOOL disableImageSafety;
@property (class, readonly, nonatomic) BOOL disableRewrites;
@property (class, readonly, nonatomic) long long defaultRewriteCount;
@property (class, readonly, nonatomic) long long maxRewriteWordCount;
@property (class, readonly, nonatomic) BOOL showCamera;
@property (class, readonly, nonatomic) BOOL showDisambiguationUI;
@property (class, readonly, nonatomic) BOOL autoSelectSingleAmbiguity;
@property (class, readonly, nonatomic) BOOL pinBottomLabelToBottom;
@property (class, readonly, nonatomic) BOOL emulateNonInternalBuild;
@property (class, readonly, nonatomic) BOOL isInternalBuild;
@property (class, readonly, nonatomic) BOOL emulateSeedBuild;
@property (class, readonly, nonatomic) BOOL isSeedBuild;
@property (class, readonly, nonatomic) BOOL enableEnglishLanguageAnalysis;
@property (class, readonly, nonatomic) long long defaultGenmojiCandidateCount;

+ (long long)integerForKey:(id)a0 withDefaultValue:(long long)a1;
+ (BOOL)boolForKey:(id)a0 withDefaultValue:(BOOL)a1;
+ (id)disableImageSafetySettingsValue;
+ (id)autoPopulateDebugPromptsSettingsValue;
+ (id)autoSelectSingleAmbiguitySettingsValue;
+ (id)bypassPersonCheckSettingsValue;
+ (id)defaultGenmojiCandidateCountSettingsValue;
+ (id)defaultRewriteCountSettingsValue;
+ (id)defaultsKeyForKey:(id)a0;
+ (id)disableLanguageCheckSettingsValue;
+ (id)disablePromptSafetySettingsValue;
+ (id)disableRewritesSettingsValue;
+ (id)emulateNonInternalBuildSettingsValue;
+ (id)emulateSeedBuildSettingsValue;
+ (id)enableEnglishLanguageAnalysisSettingsValue;
+ (double)floatForKey:(id)a0 withDefaultValue:(double)a1;
+ (id)maxRewriteWordCountSettingsValue;
+ (id)pinBottomLabelToBottomSettingsValue;
+ (id)runVGFRemoveBackgroundSettingsValue;
+ (id)settingsValueForKey:(id)a0;
+ (id)showCameraSettingsValue;
+ (id)showDisambiguationUISettingsValue;

@end
