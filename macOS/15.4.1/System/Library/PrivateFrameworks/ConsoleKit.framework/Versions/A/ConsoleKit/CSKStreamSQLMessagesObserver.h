@class NSSortDescriptor, NSString, CSKDatabaseHandle, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CSKStreamSQLMessagesObserver : CSKStreamObserver <CSKTableViewControllerFindDataSource, CSKMessagesViewControllerDataSource> {
    unsigned long long _count;
    NSObject<OS_dispatch_queue> *_sortQueue;
    NSObject<OS_dispatch_queue> *_messageQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) NSMutableArray *allMessages;
@property (retain, nonatomic) NSMutableArray *sortIndexes;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *searchQueue;
@property (retain, nonatomic) CSKDatabaseHandle *readDBHandle;
@property (retain, nonatomic) CSKDatabaseHandle *searchDBHandle;
@property (retain, nonatomic) CSKDatabaseHandle *sortDBHandle;
@property (retain, nonatomic) NSArray *searchIndexes;
@property (nonatomic) unsigned long long messagesCount;
@property (copy, nonatomic) id /* block */ searchCompletion;
@property (copy, nonatomic) id /* block */ sortCompletion;
@property (copy, nonatomic) id /* block */ resetCompletion;
@property (copy, nonatomic) id /* block */ additionCompletion;
@property (copy, nonatomic) id /* block */ removalCompletion;
@property (nonatomic) BOOL enableSortingOnReset;
@property (retain, nonatomic) NSSortDescriptor *lastUsedSortDescriptor;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)dataType;
- (void)setFilters:(id)a0;
- (id)messageAtIndex:(unsigned long long)a0;
- (void)resetWorkingStateWithDataBatch:(id)a0;
- (void)_removeMessages:(id)a0 completionBlock:(id /* block */)a1;
- (void)_searchUsingFilters:(id)a0;
- (void)_searchUsingFilters:(id)a0 handleAdditions:(BOOL)a1;
- (void)_searchUsingFilters:(id)a0 handleAdditions:(BOOL)a1 withCompletionHandler:(id /* block */)a2;
- (id)entitiesSnapshotForTableViewController:(id)a0;
- (void)handleAdditionDataBatch:(id)a0;
- (void)handleRemovalDataBatch:(id)a0;
- (id)messagesAtIndexes:(id)a0;
- (id)messagesViewController:(id)a0 messageAtRow:(unsigned long long)a1;
- (id)messagesViewController:(id)a0 messagesAtRows:(id)a1;
- (unsigned long long)numberOfRowsInMessagesViewController:(id)a0;
- (void)searchUsingFilters:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)sortDisplayedMessagesWithSortDescriptor:(id)a0;

@end
