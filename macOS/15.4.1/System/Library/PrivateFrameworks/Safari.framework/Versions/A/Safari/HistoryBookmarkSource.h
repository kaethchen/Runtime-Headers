@class WBSHistorySessionController, NSString, NSArray, NSDateFormatter, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface HistoryBookmarkSource : BookmarkSource <NSMenuDelegate> {
    WBSHistorySessionController *_historySessionController;
    NSArray *_sessions;
    NSDateFormatter *_dateFormatter;
    NSMapTable *_bookmarkCache;
    NSObject<OS_dispatch_queue> *_ignoredSiriSuggestedSitesQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedSource;

- (void).cxx_destruct;
- (void)performDelayedLaunchOperations;
- (id)_displayedTitleForEntry:(id)a0;
- (id)_entriesFromMixedItems:(id)a0;
- (void)_generateSessionsForHistoryViewIfNecessary;
- (void)_historyItemDidChange:(id)a0;
- (void)_historySessionsDidChange:(id)a0;
- (void)_removeIgnoredSiriSuggestedSiteRecordsForHistoryItems:(id)a0;
- (id)_titleForSession:(id)a0;
- (id)addressStringForContentItem:(id)a0;
- (id)bookmarkFromContentItem:(id)a0;
- (id)bookmarkSourceImage;
- (id)bookmarksFromContentItems:(id)a0;
- (BOOL)canDeleteContents;
- (id)child:(unsigned int)a0 ofContentItem:(id)a1;
- (BOOL)contentItemCanBeSearchResult:(id)a0;
- (BOOL)contentItemCanHaveChildren:(id)a0;
- (id)contentItemsToInitiallyExpand;
- (BOOL)deleteContentItems:(id)a0;
- (BOOL)deleteContentItems:(id)a0 withParentWindow:(id)a1 undoManager:(id)a2;
- (id)imageForContentItem:(id)a0;
- (id)imageURLStringForContentItem:(id)a0;
- (id)initWithSessionController:(id)a0;
- (unsigned int)numberOfChildrenOfContentItem:(id)a0;
- (id)parentOfContentItem:(id)a0;
- (id)titleStringForContentItem:(id)a0;

@end
