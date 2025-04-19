@class NSCountedSet, NSArray, _CDInteractionStore, NSPredicate, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CDInteractionCache : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableArray *_mutableInteractions;
    unsigned long long _minCacheSize;
    NSCountedSet *_conversationCandidates;
    NSMutableDictionary *_mostRecentInteractionsByTaxonomyAndIdentifier;
    BOOL _needsRefetch;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) unsigned long long size;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) id /* block */ filterBlock;
@property (readonly, copy, nonatomic) NSArray *interactions;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)_invalidate;
- (void)debounceRefetch;
- (void)_cacheInteractions:(id)a0;
- (void)_countConversationIDsForInteraction:(id)a0 deleted:(BOOL)a1;
- (void)_deleteInteractions:(id)a0;
- (void)_forceRefetch;
- (void)_handleInteractionRemoval:(id)a0;
- (void)_rebuildMostRecentInteractions;
- (void)_refetch;
- (void)_updateMostRecentInteractionsWithInteraction:(id)a0 deleted:(BOOL)a1;
- (void)cacheInteractionsForTesting:(id)a0;
- (BOOL)containsUniqueCacheCandidate:(id)a0;
- (void)deleteInteractionsForTesting:(id)a0;
- (id)initForTesting;
- (id)initForTestingWithSize:(unsigned long long)a0;
- (id)initWithInteractionStore:(id)a0 size:(unsigned long long)a1 queryPredicate:(id)a2 filterBlock:(id /* block */)a3;
- (void)interactionsDeleted:(id)a0;
- (void)interactionsRecorded:(id)a0;
- (id)mostRecentInteractionForCandidateIdentifier:(id)a0;
- (id)mostRecentInteractionForCandidateIdentifier:(id)a0 direction:(long long)a1;
- (id)mostRecentInteractionForCandidateIdentifier:(id)a0 direction:(long long)a1 mechanism:(long long)a2;
- (id)uniqueConversationCandidates;

@end
