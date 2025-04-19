@class SafariWebBookmarkList, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface URLCompletionDatabase : WBSURLCompletionDatabase <WBSURLCompletionDataSource> {
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _reloadNotificationPending;
}

@property (weak) SafariWebBookmarkList *topBookmark;
@property (readonly, nonatomic, getter=isEnumeratingBookmarkMatches) BOOL enumeratingBookmarkMatches;
@property (readonly, nonatomic, getter=isEnumeratingHistoryMatches) BOOL enumeratingHistoryMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCompletionDatabase;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)enumerateMatchDataForTypedStringHint:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 options:(unsigned long long)a2 withBlock:(id /* block */)a3;
- (id)fakeBookmarkMatchDataWithURLString:(id)a0 title:(id)a1 shouldPreload:(BOOL)a2;
- (void)getBestMatchesForTypedString:(id)a0 filterResultsUsingProfileIdentifier:(id)a1 topHits:(id *)a2 matches:(id *)a3 limit:(unsigned long long)a4 forQueryID:(long long)a5 withSearchParameters:(id)a6;
- (void)_historyOrBookmarksDidChange:(id)a0;

@end
