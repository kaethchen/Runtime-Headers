@class FormTextStatusWatcher, WBTab, WBSSiriIntelligenceDonorPersonalizationData, BrowserWindowController, ContinuousReadingListViewController, NSMutableArray, NSString, NSImageView, UnifiedTabBarItem, NSArray, NSMutableDictionary, NSTimer, NSColor, NSSet, BrowserTabViewController, NSLayoutConstraint, SearchState, NSView, BrowserViewController, WBSTranslationContext, DelayedPopUpRolloverImageButton, NSImage, NSUUID, NSURL, TabContentViewController, WBSHostTabProvider;
@protocol WBSWebExtensionTab, ThumbnailSnapshotProviding;

@interface BrowserTabViewItem : NSTabViewItem <CNAvatarViewDelegate, DelayedPopUpRolloverImageButtonDelegate, WBTabGroupManagerObserver, FormTextStatusWatcherDelegate, NSPasteboardWriting, TabBarViewItem, WBReusableTab, WBSOrderedTab, WBSHostableTab> {
    BrowserViewController *_currentBrowserViewController;
    NSString *_urlFromScript;
    DelayedPopUpRolloverImageButton *_muteButton;
    NSImageView *_viewedIndicator;
    NSView *_contactsView;
    NSMutableArray *_contactSubviews;
    NSArray *_displayedContactSubviews;
    NSMutableArray *_avatarViewControllers;
    NSMutableDictionary *_avatarViewControllersIndexMap;
    NSArray *_visibleContacts;
    BOOL _contactsViewNeedsUpdate;
    NSLayoutConstraint *_leadingContactsConstraint;
    NSImageView *_overflowAvatarView;
    NSTimer *_siteIconUpdateTimer;
    id _templateIconRequestToken;
    id _faviconRequestToken;
    unsigned long long _currentIconType;
    NSTimer *_fireOnUpdatedWebExtensionEventTimer;
    FormTextStatusWatcher *_formTextStatusWatcherForClose;
    FormTextStatusWatcher *_formTextStatusWatcherForReload;
    NSURL *_urlForLastUserInitiatedLoad;
    NSString *_titleForLastUserInitiatedLoad;
}

@property (retain) BrowserTabViewController *viewController;
@property (retain, nonatomic) ContinuousReadingListViewController *continuousReadingListViewController;
@property (weak, nonatomic) BrowserWindowController *browserWindowController;
@property (retain, nonatomic) TabContentViewController *tabContentViewController;
@property (readonly, nonatomic) TabContentViewController *representedTabContentViewController;
@property (readonly, nonatomic) BrowserWindowController *representedTabBrowserWindowController;
@property (readonly, nonatomic) id<ThumbnailSnapshotProviding> thumbnailSnapshotProvider;
@property (readonly, nonatomic) BrowserViewController *browserViewController;
@property (readonly, nonatomic) BrowserViewController *currentBrowserViewController;
@property (readonly, copy, nonatomic) NSSet *allBrowserViewControllers;
@property (copy, nonatomic) NSString *fullLabel;
@property (readonly, copy, nonatomic) NSString *pageTitle;
@property (readonly, nonatomic) NSURL *expectedOrCurrentURL;
@property (readonly, nonatomic) NSURL *expectedOrCurrentURLOrLastActiveURL;
@property (readonly, nonatomic) NSURL *failedOrCurrentURL;
@property (readonly, nonatomic) long long pageStatus;
@property (copy, nonatomic) NSString *editedUnifiedFieldString;
@property (retain, nonatomic) SearchState *lastSearchState;
@property (readonly, nonatomic) WBSSiriIntelligenceDonorPersonalizationData *personalizationData;
@property (readonly, nonatomic, getter=isFrontmost) BOOL frontmost;
@property (readonly, nonatomic) BOOL canBePersisted;
@property (readonly, nonatomic) WBSTranslationContext *translationContext;
@property (nonatomic) long long stateWhenConsolidating;
@property (readonly, nonatomic) BOOL prefersCachedTabSnapshotForTouchBar;
@property (readonly, nonatomic) UnifiedTabBarItem *unifiedTabBarItem;
@property (retain, nonatomic) NSString *placeholderLabel;
@property (retain, nonatomic) NSString *activeLabel;
@property (retain, nonatomic) NSImage *placeholderImage;
@property (nonatomic) BOOL userStartedTheaterMode;
@property (readonly, copy, nonatomic) NSMutableArray *accessoryViews;
@property (copy, nonatomic) NSUUID *contentUUID;
@property (readonly, nonatomic) BrowserTabViewItem *representedTab;
@property (retain, nonatomic) WBSHostTabProvider *hostTabProvider;
@property (copy, nonatomic) NSString *templateIconHost;
@property (retain, nonatomic) NSImage *highlightedImage;
@property (retain, nonatomic) NSColor *themeColor;
@property (readonly, nonatomic, getter=isPlaceholderTab) BOOL placeholderTab;
@property (readonly, nonatomic) NSURL *pinnedPageURL;
@property (readonly, copy, nonatomic) NSString *pinnedPageTitle;
@property (retain, nonatomic) BrowserTabViewItem *representedPinnedTab;
@property (readonly, nonatomic, getter=isShowingMonogram) BOOL showingMonogram;
@property (readonly, nonatomic) BOOL canBeRemovedInBrowserDocumentShouldClose;
@property (readonly, nonatomic) id<WBSWebExtensionTab> webExtensionTab;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } tabViewSize;
@property (readonly, nonatomic) NSURL *urlForExtensions;
@property (readonly, nonatomic) BOOL isPrivate;
@property (readonly, nonatomic, getter=isInContinuousMode) BOOL inContinuousMode;
@property (nonatomic, getter=isShowingMuteButton) BOOL showingMuteButton;
@property (nonatomic) long long muteButtonState;
@property (readonly, nonatomic) WBTab *tabGroupTab;
@property (readonly, copy, nonatomic) id /* block */ tabSetLastVisitTimeToNowBlock;
@property (readonly, copy, nonatomic) id /* block */ tabUpdateBlock;
@property (copy, nonatomic) NSString *lastUsedBookmarkFolderUUID;
@property (copy, nonatomic) NSArray *avatarContacts;
@property (nonatomic) BOOL tabViewedIndicatorVisible;
@property (nonatomic) BOOL sessionStateNeedsSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (nonatomic) BOOL showIcon;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSString *toolTip;
@property (copy, nonatomic) NSUUID *uuid;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSArray *ancestorTabIdentifiers;
@property (readonly, copy, nonatomic) NSString *windowIdentifier;
@property (readonly, nonatomic) BOOL isPinnedTab;
@property (readonly, nonatomic) BOOL shouldSelectOriginatingTabWhenClosed;
@property (readonly, nonatomic) double lastActivationTime;

+ (id)findTabInAnyWindowWithUUID:(id)a0;
+ (id)findWBTabInInactiveLocalTabGroupInAnyNonPrivateWindowWithUUID:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)setImage:(id)a0;
- (void)setLabel:(id)a0;
- (id)objectSpecifier;
- (id)source;
- (id)title;
- (void)handleCloseScriptCommand:(id)a0;
- (BOOL)isSelected;
- (BOOL)isVisible;
- (unsigned int)orderedIndex;
- (id)pasteboardPropertyListForType:(id)a0;
- (void)setToolTip:(id)a0;
- (id)text;
- (id)writableTypesForPasteboard:(id)a0;
- (id)URLString;
- (void)setURLString:(id)a0;
- (void)avatarViewControllerDidRefresh:(id)a0;
- (void)avatarViewController:(id)a0 contactAvatarDidChange:(id)a1;
- (void)loadURL:(id)a0;
- (void)didSelect;
- (void)willUnselect;
- (void)_restoreBrowserTabStateOnBrowserViewController:(id)a0 allowJavaScript:(BOOL)a1;
- (void)updateTabGroupTabShouldPersist:(BOOL)a0;
- (void)_activeParticipantsDidUpdateInTabWithUUID:(id)a0;
- (void)_cancelSiteIconUpdate;
- (void)_commonInitWithBrowserWindowController:(id)a0;
- (void)_createViewedIndicatorIfNecessary;
- (void)_didUpdateActiveParticipants:(id)a0 inTabWithUUID:(id)a1;
- (void)_getCurrentTitle:(id *)a0 url:(id *)a1;
- (void)_internalSetPinned:(BOOL)a0;
- (BOOL)_isManagedByPinnedTabManager;
- (void)_layOutAvatarView:(id)a0 atIndex:(long long)a1 avatarCount:(long long)a2;
- (void)_muteButtonClicked:(id)a0;
- (void)_pauseScreenCapture;
- (void)_requestFaviconForURL:(id)a0;
- (void)_requestTemplateIconWithURL:(id)a0;
- (void)_resetCurrentPinnedTabIconType;
- (void)_resumeScreenCapture;
- (void)_setPinnedTabIcon:(id)a0 ofType:(unsigned long long)a1;
- (BOOL)_shouldUpdatePinnedTabIcon;
- (void)_transferContentToPlaceholderTab:(id)a0;
- (void)_transitionView:(id)a0 appearing:(BOOL)a1 delay:(double)a2 size:(double)a3;
- (void)_tryToClose;
- (void)_tryToReload;
- (void)_updateContactsAvatarsNow;
- (void)_updateContactsAvatarsWithAnimationSoon;
- (void)_updateContactsView:(id)a0;
- (void)_updateMuteButtonImageAndTooltip;
- (void)_updateOverflowImageWithCount:(long long)a0;
- (void)_updatePlaceholderIconWithTabGroupTab:(id)a0;
- (void)_willCloseDueToWindowClosing:(BOOL)a0;
- (void)activateFromExtension;
- (void)addAccessoryView:(id)a0;
- (BOOL)canShowAccessoryViewWhenTabIsNarrow:(id)a0;
- (void)closeWithoutConfirming;
- (id)computeTabLabelIncludingDebuggingContent:(BOOL)a0;
- (BOOL)continuousPageViewIsHandlingPageTransitionOrLoadingPageItem;
- (id)currentContinuousReadingListPageItem;
- (void)evictFromTabReuse;
- (void)formTextStatusWasVerified:(id)a0;
- (id)handleDoJavaScriptCommand:(id)a0;
- (id)handleEmailContentsCommand:(id)a0;
- (id)handleSearchTheWebCommand:(id)a0;
- (id)initWithBrowserWindowController:(id)a0;
- (id)initWithContentUUID:(id)a0 browserWindowController:(id)a1;
- (id)initWithRepresentedPinnedTab:(id)a0 browserWindowController:(id)a1;
- (void)insertAccessoryView:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)isStateIdenticalToTabGroupTab:(id)a0;
- (void)loadContinuousReadingListPageItem:(id)a0;
- (void)loadURLFromAppExtension:(id)a0 waitInQueue:(BOOL)a1;
- (id)menuForDelayedPopUpRolloverImageButton:(id)a0;
- (void)mutableMediaPlayingStateDidChange;
- (void)muteMediaCapture;
- (void)rememberCurrentURLString;
- (void)removeAccessoryView:(id)a0;
- (void)resetTabGroupTabForBackForwardList;
- (void)restoreFromBrowserTabState:(id)a0 withOptions:(unsigned long long)a1;
- (void)restorePinnedState:(BOOL)a0 pinnedPageURL:(id)a1 pinnedPageTitle:(id)a2;
- (void)restoreTabGroupTab:(id)a0;
- (void)setDoesNotPreferCachedTabSnapshotForTouchBar;
- (void)setTabGroupTabWithoutUpdatingTabViewItem:(id)a0;
- (void)stopAllMediaPlayback;
- (BOOL)tabEntityIsSelectedForView:(id)a0;
- (id)tabEntityUUIDForView:(id)a0;
- (void)tabGroupManager:(id)a0 didUpadateActiveParticipants:(id)a1 inTabWithUUID:(id)a2;
- (void)toggleMediaOrScreenCapture;
- (void)transferContentFromHost;
- (void)tryToCloseWhenReady;
- (void)tryToReloadWhenReady;
- (void)unmuteMediaCapture;
- (void)updateAvatarContactsIfNeeded;
- (void)updateSiteIconIgnoringPinnedTabState:(BOOL)a0;
- (void)updateSiteIconNow;
- (void)updateSiteIconSoonIfNecessary;
- (void)updateTabGroupTabShouldPersist:(BOOL)a0 usingBlock:(id /* block */)a1;
- (float)visibilityPriorityForAccessoryView:(id)a0;
- (int)webProcessIdentifier;
- (void)willBeReplacedWithTabWithUUID:(id)a0;
- (void)willClose;
- (void)willCloseDueToWindowClosing;
- (void)willOpen;

@end
