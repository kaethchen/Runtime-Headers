@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WBSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsSynchronizationQueue;
    long long _persona;
    NSString *_safariVersion;
    NSString *_perSitePreferencesPopoverLocation;
    BOOL _safariReportedNonOtherBlockingReason;
    long long _safariQuitReason;
}

@property (readonly, nonatomic) BOOL safariIsTerminating;

+ (id)sharedLogger;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)_sendEvent:(id)a0 usingBlock:(id /* block */)a1;
- (void)didSubmitFormOfType:(unsigned long long)a0 withFieldType:(long long)a1 elementType:(unsigned long long)a2 isAutoFilled:(BOOL)a3 isManuallyFilledByUser:(BOOL)a4 modificationType:(unsigned long long)a5 autoFillOfferedType:(unsigned long long)a6 webpageLocale:(id)a7;
- (void)didSubmitFormOfType:(unsigned long long)a0 withPerFormModificationsDictionary:(id)a1 webpageLocale:(id)a2;
- (void)didSubmitFormOfType:(unsigned long long)a0 withPerFormUsageDictionary:(id)a1 webpageLocale:(id)a2;
- (void)didDetermineReaderAvailability:(BOOL)a0;
- (void)didPunchOutToBrowserFromSource:(long long)a0;
- (void)didSelectTabGroupInDropDownMenu;
- (void)didSurfaceNewStrongPasswordView;
- (void)reportAudioIndicatorClickEvent:(long long)a0;
- (void)reportWeakPasswordWarningEvent:(long long)a0;
- (void)didOpenPrivacySettingsForWebApp;
- (void)didReceiveAnalyticsEventFromWebKitWithName:(id)a0 description:(id)a1 payload:(id)a2;
- (void)didSendTabGroup;
- (void)reportTabUpdatedWithUpdateType:(long long)a0;
- (void)reportWebAppToolbarButtonUsage:(long long)a0;
- (id)_builtInImageNameToSimpleName:(id)a0;
- (void)_didAddBookmarkWithMethod:(id)a0 menuItemType:(id)a1;
- (void)_logDiagnosticMessageWithKey:(id)a0 diagnosticMessage:(id)a1 integerValue:(long long)a2;
- (void)_logDiagnosticMessageWithKey:(id)a0 diagnosticMessage:(id)a1 stringValue:(id)a2;
- (id)_nameForStartPageSection:(long long)a0;
- (id)_sanitizedPathExtensionForAnalyticsForPathExtension:(id)a0;
- (void)_sendEvent:(id)a0;
- (void)_sendEventAddingVersionInfo:(id)a0 baseEvent:(id)a1;
- (void)_sendEventAddingVersionInfo:(id)a0 usingBlock:(id /* block */)a1;
- (void)didAcceptCompletionItemOfType:(long long)a0 atRank:(unsigned long long)a1;
- (void)didAcceptSearchSuggestionOfType:(long long)a0;
- (void)didActivateLinkWithZoomScale:(float)a0 recentlyZoomedIn:(BOOL)a1;
- (void)didActivateReaderWithTrigger:(long long)a0;
- (void)didActivateVoiceSearchAccidentally:(BOOL)a0;
- (void)didAddBookmarkFromToolbarMenuWithItemType:(long long)a0;
- (void)didAddBookmarkWithMethod:(long long)a0;
- (void)didAddNumberOfBookmarksInMemory:(unsigned long long)a0;
- (void)didAddReadingListItemWithMethod:(long long)a0;
- (void)didAddWebAppToDock:(BOOL)a0 hasManifest:(BOOL)a1 withMethod:(long long)a2 withLength:(unsigned long long)a3 withIconKind:(long long)a4 withDisplayMode:(id)a5 withCustomization:(long long)a6;
- (void)didAddWebClip;
- (void)didBanWebsiteWithMetadata:(id)a0;
- (void)didCancelScribble;
- (void)didChangeStartPageSectionVisibility:(id)a0 visible:(BOOL)a1;
- (void)didChooseCustomPassword;
- (void)didChooseIntervalFromAutomaticTabClosingFirstTimeExperiencePrompt:(id)a0;
- (void)didChooseStrongPasswordWithoutSpecialCharacters;
- (void)didChooseToEditStrongPassword;
- (void)didChooseTopHit:(BOOL)a0 matchLength:(unsigned long long)a1 matchScore:(float)a2;
- (void)didClearBrowsingDataFromInterval:(long long)a0 withMethod:(long long)a1;
- (void)didClearScribble;
- (void)didClearStartPageBackgroundImage;
- (void)didClearWebsiteDataForWebApp;
- (void)didClickEntityCardSBA;
- (void)didClickFindInPageSBA;
- (void)didClickSparkleSBA;
- (void)didClickSummaryCardSBA;
- (void)didClickWebsiteSettingsSBA;
- (void)didClickZoomInSBA;
- (void)didClickZoomOutSBA;
- (void)didClickZoomSelectorSBA;
- (void)didCloseTabWithTrigger:(long long)a0 tabClosingAction:(long long)a1 numberOfTabsClosed:(unsigned long long)a2 tabCollectionViewType:(long long)a3;
- (void)didCloseTabWithTrigger:(long long)a0 tabCollectionViewType:(long long)a1;
- (void)didCloseTabsAutomaticallyWithCount:(unsigned long long)a0 tabClosingInterval:(id)a1;
- (void)didCloseVisualTabPickerWithMethod:(long long)a0;
- (void)didContinueUserActivityOfType:(long long)a0;
- (void)didConvertExtensionWithKeySupport:(id)a0;
- (void)didCreateNewTabGroup;
- (void)didCreateNewTabGroupFromTheDropDownMenu;
- (void)didCreateTabGroupFromLocation:(long long)a0 prepopulatedWithTabs:(BOOL)a1;
- (void)didDeleteBookmarkInMemory;
- (void)didDeleteNumberOfBookmarksInMemory:(unsigned long long)a0;
- (void)didDetectLanguageOfWebpage:(id)a0 primaryLocale:(id)a1 webpageCanBeTranslatedToPrimaryLocale:(BOOL)a2 canOfferTranslation:(BOOL)a3 firstNonPrimaryLocaleThatCanBeTranslatedTo:(id)a4 numberOfPreferredLocales:(unsigned long long)a5 notificationLevel:(long long)a6;
- (void)didDetectPossibleUserTrackingInHostApp:(id)a0 urlHasIDFA:(BOOL)a1 urlHasQueryString:(BOOL)a2 userInteracted:(BOOL)a3 viewControllerIsHidden:(BOOL)a4;
- (void)didDismissCompletionListWithItemAccepted:(BOOL)a0 goKeyTapped:(BOOL)a1 unifiedFieldContentType:(long long)a2;
- (void)didDismissSwitchToSafariBanner;
- (void)didDismissWebAppBanner;
- (void)didDownvoteDataSourceWithMetadata:(id)a0;
- (void)didDragAndDropCustomStartPageBackgroundImage;
- (void)didEnableScribble;
- (void)didEnableTheaterModeSBA;
- (void)didEngageWithStartPageSection:(long long)a0;
- (void)didEnterBackgroundWithBookmarksInMemory;
- (void)didEnterTabViewWithMethod:(long long)a0;
- (void)didFindOnPageWithTrigger:(long long)a0;
- (void)didFinishPageLoadWithPageLoadStatus:(long long)a0;
- (void)didFinishScribble:(unsigned long long)a0;
- (void)didHideMoreItems;
- (void)didInjectScriptForExtensionWithIdentifier:(id)a0;
- (void)didInvokeToolbarButtonForExtensionWithIdentifier:(id)a0;
- (void)didLaunchPasswordsApp;
- (void)didLoadTabContent:(long long)a0;
- (void)didManuallyMarkReadingListItemAsRead:(BOOL)a0;
- (void)didModifyPerSitePreferencesWithPreferenceIdentifier:(id)a0 modificationLevel:(long long)a1 type:(long long)a2 method:(long long)a3;
- (void)didMoveToBackgroundWithNumberOfOnGoingDownloads:(unsigned long long)a0;
- (void)didNavigateToFrequentlyVisitedSiteByAnyMeansWithAnalyticsPayload:(id)a0;
- (void)didOpenClearHistoryFromSource:(id)a0;
- (void)didOpenCloudTabsItemWithPosition:(long long)a0;
- (void)didOpenNewBlankTabWithTrigger:(long long)a0 tabCollectionViewType:(long long)a1;
- (void)didOpenNewTabWithURLWithTrigger:(long long)a0 isExternalLink:(BOOL)a1 tabCollectionViewType:(long long)a2;
- (void)didOpenNewTabWithURLWithTrigger:(long long)a0 tabCollectionViewType:(long long)a1;
- (void)didOpenNotificationSettingsForWebApp;
- (void)didOpenPerSitePreferencesPopoverVia:(long long)a0;
- (void)didOpenReadingListItemWithPosition:(long long)a0;
- (void)didOpenReadingListItemWithReachableNetwork:(BOOL)a0 isContinuousTransition:(BOOL)a1;
- (void)didOpenRecentlyClosedTabsItemWithPosition:(long long)a0;
- (void)didOpenRecommendationWithMetadata:(id)a0 withPosition:(long long)a1;
- (void)didOpenTabGroupDropDownMenu;
- (void)didOpenVisualTabPickerWithMethod:(long long)a0;
- (void)didOpenWebApp;
- (void)didPerformActionOnDownloadsPopover:(long long)a0;
- (void)didPerformDownloadsFileEvent:(long long)a0 withFileType:(id)a1;
- (void)didPerformMoreMenuAction:(long long)a0;
- (void)didPerformSafeBrowsingAction:(long long)a0 fromSource:(long long)a1;
- (void)didPerformVisualTabPickerMiscEvent:(long long)a0;
- (void)didPresentUsernamePrompt;
- (void)didPreventBookmarkActionWithBookmarkType:(long long)a0 actionType:(long long)a1;
- (void)didPrintPage;
- (void)didPunchOutToWebAppFromSource:(long long)a0;
- (void)didReloadEvent:(long long)a0 withReloadType:(long long)a1 withReloadProvenance:(long long)a2 withLayout:(long long)a3;
- (void)didRemoveFrequentlyVisitedSiteWithAnalyticsPayload:(id)a0;
- (void)didRemoveSiteSpecificSearchProvider;
- (void)didRequestPageShowingSideBar:(BOOL)a0;
- (void)didRequestSearchSuggestions;
- (void)didRequestTranslatingToLocale:(id)a0 webpageLocale:(id)a1 requestType:(long long)a2 isTargetLocalePrimaryLocale:(BOOL)a3;
- (void)didRetrieveNumberOfFavorites:(unsigned long long)a0;
- (void)didRetrieveNumberOfFrequentlyVisitedSites:(unsigned long long)a0;
- (void)didRetrieveNumberOfRecommendations:(unsigned long long)a0 numberOfTopics:(unsigned long long)a1;
- (void)didRevealDownloadWithMIMEType:(id)a0 uti:(id)a1 result:(long long)a2;
- (void)didSaveInMemoryBookmarksToSideFile;
- (void)didSelectFavoriteWithOpenLocation:(long long)a0;
- (void)didSelectFavoritesRow:(long long)a0;
- (void)didSelectFrequentlyVisitedSiteWithOpenLocation:(long long)a0 analyticsPayload:(id)a1;
- (void)didSelectNewStrongPassword;
- (void)didSelectNotNowForUsePasswordsApp;
- (void)didSelectStartPrivateWindowInDropDownMenu;
- (void)didSelectUsePasswordsApp;
- (void)didSelectXForNewStrongPassword;
- (void)didSetBuiltInStartPageBackgroundImage;
- (void)didSetCustomStartPageBackgroundImage;
- (void)didSetCustomWebAppIcon;
- (void)didSetCustomWebAppProperty:(long long)a0 withLength:(unsigned long long)a1;
- (void)didSetDownloadFolderToProviderWithIdentifier:(id)a0 isDefaultFolder:(BOOL)a1;
- (void)didSetPrivateBrowsingEnabled:(BOOL)a0;
- (void)didSetShowNavigationControlsInWebApp:(BOOL)a0;
- (void)didSetShowTitleBarColorInWebApp:(BOOL)a0;
- (void)didShowEntityCardSBA;
- (void)didShowPasswordGenerationPromptWithPasswordAccepted:(BOOL)a0;
- (void)didShowSafeBrowsingWarningWithSource:(long long)a0;
- (void)didShowSparkleSBA;
- (void)didShowSummaryCardSBA;
- (void)didSnapBack;
- (void)didStartDragWithDragContentType:(long long)a0;
- (void)didSuggestUsernameInPromptAndUserKeptSuggestion:(BOOL)a0;
- (void)didSurfaceUsePasswordsAppView;
- (void)didSwitchToSafari:(id)a0 entryPoint:(id)a1;
- (void)didSwitchToTabGroupFromLocation:(long long)a0;
- (void)didTakeActionOnClearHistory:(id)a0;
- (void)didToggleMagicMenuSBA;
- (void)didTogglePIPFromTheaterMode;
- (void)didToggleReaderSBA;
- (void)didToggleShowLessButtonForSection:(long long)a0;
- (void)didToggleShowMoreButtonForSection:(long long)a0;
- (void)didToggleShowMoreButtonForSection:(long long)a0 isShowingMore:(BOOL)a1;
- (void)didUseCreditCardAutoFillEscapeHatchFillingNewType:(id)a0 forPreviousType:(id)a1 fieldType:(long long)a2;
- (void)didUseGeneratedPassword;
- (void)didUseSidebarAction:(long long)a0;
- (void)didViewSafariOnboardingExperience:(id)a0;
- (void)didVisitBookmarksWithOpenLocation:(long long)a0 numberOfBookmarksVisited:(unsigned long long)a1;
- (void)didVisitWebpageSBAWithUserOptedIn:(BOOL)a0;
- (void)generatedPasswordDidOverwriteExistingPasswordWithTrigger:(long long)a0;
- (void)logDiagnosticMessageWithKey:(id)a0 diagnosticMessage:(id)a1;
- (void)logDiagnosticMessageWithKey:(id)a0 diagnosticMessage:(id)a1 result:(long long)a2;
- (void)logDiagnosticMessageWithKey:(id)a0 diagnosticMessage:(id)a1 value:(id)a2;
- (void)performOnAnalyticsQueueWithDelay:(long long)a0 block:(id /* block */)a1;
- (void)recordSearchResultPageImpressionWithDefaultSearchProviderIdentifier:(id)a0 searchProviderIdentifier:(id)a1 provenance:(long long)a2;
- (void)registerSafariVersion:(id)a0 persona:(long long)a1;
- (void)reportAdvancedPrivacyProtectionPreference;
- (void)reportAllProcessInfo:(id)a0;
- (void)reportApplicationCacheSize:(unsigned long long)a0;
- (void)reportAutomaticTabClosingInterval:(id)a0;
- (void)reportAverageNumberOfTabsPerTabGroup:(long long)a0 andMaximum:(long long)a1;
- (void)reportBlockingSafariQuitWithReason:(long long)a0;
- (void)reportCustomizationSyncEnablement:(BOOL)a0;
- (void)reportExperimentalFeaturesOnLaunchForWebXREnabled:(BOOL)a0 webXRGamepadsModuleEnabled:(BOOL)a1 webXRHandInputModuleEnabled:(BOOL)a2 modelElementEnabled:(BOOL)a3;
- (void)reportFirstInteractionAfterTranslation:(long long)a0 maxVisibleHeightPercentage:(float)a1;
- (void)reportIOSToolbarButtonUsage:(long long)a0 withLayout:(long long)a1;
- (void)reportInvalidMessageFromWebProcess:(id)a0;
- (void)reportMacOSToolbarButtonUsage:(long long)a0 withLayout:(long long)a1;
- (void)reportNewTabBehavior:(long long)a0;
- (void)reportNewWindowBehavior:(long long)a0;
- (void)reportNumberOfDuplicateBookmarksWithTopLevelDuplicatesCount:(unsigned long long)a0 allDuplicatesCount:(unsigned long long)a1;
- (void)reportNumberOfExtensionsWithFrequencyDictionaryProvider:(id /* block */)a0;
- (void)reportNumberOfPinnedTabs:(unsigned long long)a0;
- (void)reportNumberOfTabGroups:(long long)a0;
- (void)reportNumberOfTabs:(long long)a0;
- (void)reportNumberOfTabsPerWindow:(long long)a0;
- (void)reportNumberOfWebApps:(long long)a0 andBookmarks:(long long)a1;
- (void)reportNumberOfWebsitesWithScribbleActive:(unsigned long long)a0;
- (void)reportNumberOfWindows:(long long)a0;
- (void)reportOverlayStatusBarIsEnabled:(BOOL)a0;
- (void)reportPictureInPictureEvent:(long long)a0;
- (void)reportPrivateBrowsingUsage:(long long)a0;
- (void)reportPrivateRelayModulePromptEvent:(id)a0;
- (void)reportSVCToolbarButtonUsage:(long long)a0;
- (void)reportSafariTabStateMismatchWithError:(long long)a0 systemTALEnabled:(BOOL)a1 safariRestoreOnLaunchEnabled:(BOOL)a2 excludePrivateWindows:(BOOL)a3 systemSaysPreserveState:(BOOL)a4 stringRepresentation:(id)a5;
- (void)reportSafariVersion:(id)a0 safariAndWebKitVersion:(id)a1;
- (void)reportShowFullURLInSmartSearchFieldPreference:(BOOL)a0;
- (void)reportShowStandaloneTabBarPreference:(BOOL)a0;
- (void)reportStartPageBackgroundImageVisible:(BOOL)a0;
- (void)reportStartPageBackgroundName:(id)a0;
- (void)reportStartPageOverrideStatistics:(id)a0;
- (void)reportStartPageSectionVisibility:(long long)a0 visible:(BOOL)a1;
- (void)reportStartPageVisibility;
- (void)reportStatusForExtensions:(id)a0 extensionType:(id)a1;
- (void)reportTabGroupSyncFinishedWithInfo:(id)a0;
- (void)reportTabGroupSyncSuccessesWithCount:(id)a0;
- (void)reportTabsForNonTabGroupUser:(long long)a0 andAverageNumber:(long long)a1;
- (void)reportUnifiedFieldEvent:(long long)a0;
- (void)reportUnifiedFieldHistoryItemURLAutocompletedEventWithDaysSinceLastVisit:(id)a0;
- (void)reportUnifiedFieldSearchSlowDown:(double)a0;
- (void)reportUnifiedTabBarStatusWithLayout:(long long)a0 numberOfTabsInCurrentTabBar:(unsigned long long)a1 tabBarIsCurrentlyScrollable:(BOOL)a2 tabsShowOnlyIcons:(BOOL)a3 backgroundColorInTabBarEnabled:(BOOL)a4;
- (void)reportUserConsentStateSBA:(id)a0;
- (void)reportUserPreferencesOnLaunchForJavaScriptEnabled:(BOOL)a0 safeBrowsingEnabled:(BOOL)a1 siteSpecificSearchEnabled:(BOOL)a2 trackingPolicy:(unsigned long long)a3;
- (void)reportWebContentProcessInfo:(id)a0;
- (void)safariDidBeginTerminationWithReason:(long long)a0;
- (void)safariDidCancelTermination;
- (void)webExtensionBackgroundPage:(id)a0 livedTooLong:(double)a1;

@end
