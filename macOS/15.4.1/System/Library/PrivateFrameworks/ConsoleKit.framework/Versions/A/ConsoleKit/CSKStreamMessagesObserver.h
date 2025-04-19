@class NSString, NSMutableArray, NSSortDescriptor;

@interface CSKStreamMessagesObserver : CSKStreamObserver <CSKTableViewControllerFindDataSource, CSKMessagesViewControllerDataSource>

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
@property (copy, nonatomic) id /* block */ streamFilteringDidStart;
@property (copy, nonatomic) id /* block */ streamFilteringDidFinish;
@property (copy, nonatomic) id /* block */ updateFilterFractionCompleted;
@property (copy, nonatomic) id /* block */ resetCompletion;
@property (copy, nonatomic) id /* block */ additionCompletion;
@property (copy, nonatomic) id /* block */ removalCompletion;
@property (nonatomic) BOOL enableSortingOnReset;
@property (retain, nonatomic) NSSortDescriptor *lastUsedSortDescriptor;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)dataType;
- (id)messageAtIndex:(unsigned long long)a0;
- (unsigned long long)messagesCount;
- (void)resetWorkingStateWithDataBatch:(id)a0;
- (void)_removeMessages:(id)a0 completionBlock:(id /* block */)a1;
- (id)entitiesSnapshotForTableViewController:(id)a0;
- (void)filteringDidFinish;
- (void)filteringDidStart;
- (void)handleAdditionDataBatch:(id)a0;
- (void)handleRemovalDataBatch:(id)a0;
- (id)messagesAtIndexes:(id)a0;
- (id)messagesViewController:(id)a0 messageAtRow:(unsigned long long)a1;
- (id)messagesViewController:(id)a0 messagesAtRows:(id)a1;
- (unsigned long long)numberOfRowsInMessagesViewController:(id)a0;
- (void)sortDisplayedMessagesWithSortDescriptor:(id)a0;
- (void)updateFilterFractionCompleted:(double)a0;

@end
