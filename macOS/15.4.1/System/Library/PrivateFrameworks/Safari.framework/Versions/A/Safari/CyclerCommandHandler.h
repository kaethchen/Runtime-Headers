@class NSString, BookmarksController, WBSDistributedNotificationObserver;

@interface CyclerCommandHandler : NSObject <WBSCyclerTestTarget> {
    BookmarksController *_bookmarksController;
    WBSDistributedNotificationObserver *_syncAgentNotificationObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)createBookmarkListWithTitle:(id)a0 inListWithIdentifier:(id)a1 atIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)createBookmarkWithTitle:(id)a0 url:(id)a1 inListWithIdentifier:(id)a2 atIndex:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)clearBookmarksWithOptions:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)deleteBookmarkWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchTopLevelBookmarkList:(id /* block */)a0;
- (void)moveBookmarkWithIdentifier:(id)a0 intoListWithIdentifier:(id)a1 atIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)setTitle:(id)a0 forBookmarkWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)setURL:(id)a0 forBookmarkWithIdentifier:(id)a1 reply:(id /* block */)a2;
- (void)syncBookmarksWithCompletionHandler:(id /* block */)a0;
- (id)_cyclerRepresentationOfBookmark:(id)a0;
- (void)_insertBookmark:(id)a0 intoListWithIdentifier:(id)a1 atIndex:(unsigned long long)a2 reply:(id /* block */)a3;
- (BOOL)_isSpecialBookmark:(id)a0;
- (void)_performBookmarkUpdatesWithCompletionHandler:(id /* block */)a0 updates:(id /* block */)a1;
- (void)_startMonitoringSyncStatusWithCompletionHandler:(id /* block */)a0;
- (BOOL)_validateInsertionOfBookmark:(id)a0 intoList:(id)a1 atIndex:(unsigned long long)a2;
- (id)initWithBookmarksController:(id)a0;

@end
