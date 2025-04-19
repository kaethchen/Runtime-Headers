@class NSArray, NSMapTable, NSSet, NSString, NSObject;
@protocol EFScheduler, EDAccountsProvider, OS_dispatch_queue, EDMailboxProviderDelegate;

@interface EDMailboxProvider : NSObject <EMMailboxTypeResolver> {
    _Atomic int _deferringInvalidationCount;
    BOOL _needsToInvalidate;
}

@property (weak, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (retain) NSMapTable *legacyMailboxToMailboxMap;
@property (retain) NSMapTable *objectIDToLegacyMailboxMap;
@property (retain) NSArray *allMailboxCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mailboxCacheQueue;
@property (retain, nonatomic) id<EFScheduler> observerScheduler;
@property (weak, nonatomic) id<EDMailboxProviderDelegate> delegate;
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_invalidateCache;
- (void)_fetchMailboxesForAccount:(id)a0 kind:(long long)a1;
- (id)mailboxObjectIDsForMailboxType:(long long)a0;
- (void)_didChangeMailboxList:(id)a0;
- (void)_didFetchMailboxList:(id)a0;
- (void)_didReloadMailboxList:(id)a0;
- (BOOL)_isDeferringInvalidation;
- (void)_mailboxInvalidated:(id)a0;
- (void)_populateCache;
- (id)_transformMailbox:(id)a0 legacyMailboxToMailboxMap:(id)a1 objectIDToLegacyMailboxMap:(id)a2;
- (void)_willFetchMailboxList:(id)a0;
- (void)_willReloadMailboxList:(id)a0;
- (id)allMailboxes;
- (void)beginDeferringInvalidation;
- (void)endDeferringInvalidation;
- (void)enumerateAccountsWithBlock:(id /* block */)a0;
- (void)fetchMailboxesWithKind:(long long)a0;
- (id)initWithAccountsProvider:(id)a0;
- (void)invalidateMailboxes;
- (id)legacyMailboxForObjectID:(id)a0;
- (id)legacyMailboxesForObjectIDs:(id)a0;
- (id)mailboxForObjectID:(id)a0;
- (id)mailboxFromLegacyMailbox:(id)a0;
- (long long)mailboxTypeForMailboxObjectID:(id)a0;
- (id)mailboxesFromLegacyMailboxes:(id)a0;
- (void)test_tearDown;

@end
