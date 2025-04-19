@interface CDMFeatureFlags : NSObject

+ (BOOL)isLogNluEnabled;
+ (BOOL)isUaaPPreferred;
+ (BOOL)globalOverridesAreEnabled;
+ (BOOL)isAmbiguityRefactorEnabled;
+ (BOOL)isCATIEnabled;
+ (BOOL)isCATIMultiTurnEnabled;
+ (BOOL)isCDMClientXPCEnabled;
+ (BOOL)isCbrUnrestrictedByRDEnabled;
+ (BOOL)isCcqrAerCbrEnabled;
+ (BOOL)isContextUpdateEnabled;
+ (BOOL)isContextualSpanMatcherEnabled;
+ (BOOL)isFeatureStoreEnabled;
+ (BOOL)isFeatureStoreEnabledForExternalBuilds;
+ (BOOL)isInterpretationGroupFilteringEnabled;
+ (BOOL)isLVCEnabled;
+ (BOOL)isLighthouseAPIEnabled;
+ (BOOL)isMarrsMentionDetectorEnabled;
+ (BOOL)isMarrsMentionResolverEnabled;
+ (BOOL)isMentionResolverRewriterEnabled;
+ (BOOL)isNLv4ServiceOverridesEnabled;
+ (BOOL)isPSCEnabled;
+ (BOOL)isPhoneticSpanMatchingEnabled;
+ (BOOL)isRepetitionDetectionEnabled;
+ (BOOL)isSSUCacheUpdateOnEveryRequestEnabled;
+ (BOOL)isSSUEnableIndexingEnabled;
+ (BOOL)isSSUEnabled;
+ (BOOL)isShortcutsNLv4FollowupEnabled;
+ (BOOL)isSiriMiniEnabled;
+ (BOOL)isTrieOverridesEnabled;
+ (BOOL)isUaaPEnabled;
+ (BOOL)isUsoEntitySpanEnabled;

@end
