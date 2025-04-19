@interface WBSFeatureAvailability : NSObject

@property (class, readonly, nonatomic) BOOL isInternalInstall;
@property (class, readonly, nonatomic) BOOL hasInternalContent;
@property (class, readonly, nonatomic) BOOL shouldShowInternalUI;
@property (class, readonly, nonatomic) BOOL isShowURLsInURLAutocompleteDebugChannelEnabled;
@property (class, readonly, nonatomic) BOOL isCustomizationSyncEnabled;
@property (class, readonly, nonatomic) BOOL isPerSiteSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isStartPageSettingSyncEnabled;
@property (class, readonly, nonatomic) BOOL isSafariProfilesEnabled;
@property (class, readonly, nonatomic) BOOL isLockedPrivateBrowsingEnabled;
@property (class, readonly, nonatomic) BOOL isOngoingCredentialSharingEnabled;
@property (class, readonly, nonatomic) BOOL isAirDropPasswordsEnabled;
@property (class, readonly, nonatomic) BOOL isStreamlinedCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL isLabelPreviousSearchesInCompletionListEnabled;
@property (class, readonly, nonatomic) BOOL defaultSearchEngineMatchesExperiment;
@property (class, readonly, nonatomic) BOOL isNewTabAndWindowSyncingEnabled;
@property (class, readonly, nonatomic) BOOL isWhatsNewInSafariEnabled;
@property (class, readonly, nonatomic) BOOL isPasswordsAppInstalled;
@property (class, nonatomic, getter=isAutomaticStrongPasswordsEnabled) BOOL automaticStrongPasswordsEnabled;
@property (class, nonatomic) BOOL isAutomaticPasskeyUpgradesEnabled;
@property (class, readonly, nonatomic) BOOL isSignInWithAppleInPasswordManagerEnabled;
@property (class, readonly, nonatomic) BOOL isSignInWithAppleCredentialSharingEnabled;
@property (class, readonly, nonatomic) BOOL isBrowsingAssistantEnabled;
@property (class, readonly, nonatomic) BOOL isOnDeviceSummarizationEnabled;
@property (class, readonly, nonatomic) BOOL is2024CloudTabsEnabled;
@property (class, readonly, nonatomic) BOOL is2024FavoritesEnabled;
@property (class, readonly, nonatomic) BOOL is2024PrivacyReportEnabled;
@property (class, readonly, nonatomic) BOOL is2024ReadingListEnabled;
@property (class, readonly, nonatomic) BOOL is2024SuggestionsEnabled;
@property (class, readonly, nonatomic) BOOL is2024StartPageSectionTitleEnabled;
@property (class, readonly, nonatomic) BOOL isWebKitTextExtractionEnabled;
@property (class, readonly, nonatomic) BOOL isAppleAccountBrandingEnabled;
@property (class, readonly, nonatomic) BOOL isScribbleEnabled;
@property (class, readonly, nonatomic) BOOL scribbleRequiresVisualSimilarity;
@property (class, readonly, nonatomic) BOOL isPostFixSuggestionsEnabled;
@property (class, nonatomic) BOOL isPasswordsAppFuzzySearchEnabled;
@property (class, readonly, nonatomic) BOOL isCredentialExchangeEnabled;

+ (BOOL)_computeIsWhatsNewInSafariEnabled;
+ (BOOL)_is2024StartPageDisabledOverride;
+ (BOOL)_isPasswordSharingAvailable;
+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)isSearchProviderEnabled:(unsigned long long)a0;
+ (BOOL)supportsURLCredentialStorageAccessControlGroups;
+ (void)toggleShowURLsInURLAutocompleteDebugChannel;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;

@end
