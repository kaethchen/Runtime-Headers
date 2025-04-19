@class NSOrderedSet, NSMutableDictionary, NSMutableOrderedSet;

@interface _EDGroupedSenderList : NSObject {
    NSMutableDictionary *_groupsBySender;
    NSMutableOrderedSet *_orderedGroups;
    id /* block */ _comparator;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _grouping;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long unreadCount;
@property (readonly, copy, nonatomic) NSOrderedSet *orderedGroupedSenders;

- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)orderedGroupedSendersWithLimit:(unsigned long long)a0;
- (void)_checkConsistencyAndRebuildIfNecessary;
- (void)addGroupedSender:(id)a0;
- (id)groupedSenderAtIndex:(unsigned long long)a0;
- (id)groupedSenderForKey:(id)a0;
- (id)initWithComparator:(id /* block */)a0 grouping:(long long)a1;
- (void)removeGroupedSender:(id)a0;
- (void)updateGroupedSender:(id)a0;

@end
