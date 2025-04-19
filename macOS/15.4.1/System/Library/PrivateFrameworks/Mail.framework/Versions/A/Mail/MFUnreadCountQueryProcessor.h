@class NSCountedSet, NSMutableDictionary, NSString, NSObject;
@protocol MFSearchableIndexQueryResultProcessorDelegate, OS_os_log, MFMailboxDisplayCountUpdater, OS_dispatch_queue;

@interface MFUnreadCountQueryProcessor : NSObject <EFLoggable, MFSearchableIndexQueryResultProcessor, MFMessageConsumer> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _logPrefixStringLock;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (getter=isCancelled) BOOL cancelled;
@property (retain, nonatomic) NSCountedSet *seenMailMessageIDs;
@property (retain, nonatomic) NSMutableDictionary *persistentIDToMailMessageID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *seenMailMessageIDsQueue;
@property (retain, nonatomic) NSString *logPrefixString;
@property (readonly, nonatomic) id<MFMailboxDisplayCountUpdater> displayCountUpdater;
@property (readonly, nonatomic) BOOL useTotalCount;
@property (copy, nonatomic) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFSearchableIndexQueryResultProcessorDelegate> delegate;
@property (readonly) BOOL shouldCancel;

- (void).cxx_destruct;
- (void)cancel;
- (void)removePersistentID:(id)a0;
- (void)_nts_addPersistentID:(id)a0 mailMessageID:(id)a1;
- (void)_nts_removePersistentID:(id)a0;
- (id)_persistentIDsInLibraryFromResults:(id)a0;
- (void)_updateIDsWithBlock:(id /* block */)a0;
- (void)addPersistentID:(id)a0 mailMessageID:(id)a1;
- (void)finishedSendingMessages;
- (id)initWithDisplayCountUpdater:(id)a0 useTotalCount:(BOOL)a1;
- (void)newMessagesAvailable:(id)a0 secondaryMessages:(id)a1 fromUpdate:(BOOL)a2;
- (void)provider:(id)a0 foundResults:(id)a1 queryIdentifier:(id)a2;
- (void)provider:(id)a0 removedPersistentIDs:(id)a1;
- (void)removePersistentIDs:(id)a0;
- (void)searchPhaseComplete;

@end
