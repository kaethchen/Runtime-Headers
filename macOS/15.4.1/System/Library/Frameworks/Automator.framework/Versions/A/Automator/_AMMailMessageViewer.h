@class NSArray, _AMMailMailbox, _AMMailWindow;

@interface _AMMailMessageViewer : SBObject

@property (readonly, copy) _AMMailMailbox *draftsMailbox;
@property (readonly, copy) _AMMailMailbox *inbox;
@property (readonly, copy) _AMMailMailbox *junkMailbox;
@property (readonly, copy) _AMMailMailbox *outbox;
@property (readonly, copy) _AMMailMailbox *sentMailbox;
@property (readonly, copy) _AMMailMailbox *trashMailbox;
@property int sortColumn;
@property BOOL sortedAscending;
@property BOOL mailboxListVisible;
@property BOOL previewPaneIsVisible;
@property (copy) NSArray *visibleColumns;
@property (copy) NSArray *visibleMessages;
@property (copy) NSArray *selectedMessages;
@property (copy) NSArray *selectedMailboxes;
@property (copy) _AMMailWindow *window;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)messages;
- (long long)id;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end
