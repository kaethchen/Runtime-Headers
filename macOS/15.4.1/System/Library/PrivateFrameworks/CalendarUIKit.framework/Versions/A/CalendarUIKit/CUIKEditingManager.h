@class NSMutableDictionary, EKEventStore, NSMutableSet, EKChangeListener;

@interface CUIKEditingManager : NSObject {
    NSMutableSet *_hiddenObjects;
    NSMutableDictionary *_uuidAliases;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) EKEventStore *eventStore;
@property (retain) NSMutableSet *editingContextGroups;
@property (retain) EKChangeListener *changeListener;
@property (retain) NSMutableDictionary *changeHistory;
@property (retain) NSMutableDictionary *changedObjectMap;

- (void).cxx_destruct;
- (void)unhide:(id)a0;
- (void)hide:(id)a0;
- (id)eventsMatchingPredicate:(id)a0;
- (id)initWithEventStore:(id)a0;
- (id)remindersMatchingPredicate:(id)a0;
- (id)eventWithIdentifier:(id)a0;
- (id)eventsWithIdentifiers:(id)a0;
- (void)fetchRemindersMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (id)remindersWithExternalIdentifier:(id)a0;
- (BOOL)closeEditingContext:(id)a0;
- (BOOL)closeEditingContext:(id)a0 shouldClose:(BOOL *)a1;
- (BOOL)closeEditingContextAndCommitChanges:(id)a0;
- (BOOL)closeEditingContextWithoutCommittingChanges:(id)a0;
- (BOOL)commitChangesFromEditingContextWithoutClosing:(id)a0;
- (id)openEditingContextWithObject:(id)a0 interfaceType:(unsigned long long)a1;
- (id)openEditingContextWithObject:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (BOOL)_objectsSupportEditingContexts:(id)a0;
- (id)eventWithAlias:(id)a0;
- (void)_addContextToNewOrExistingGroup:(id)a0;
- (id)_allOpenEditingContexts;
- (BOOL)_changesExistForObject:(id)a0;
- (BOOL)_closeEditingContext:(id)a0 action:(unsigned long long)a1 condition:(unsigned long long)a2 shouldClose:(BOOL *)a3;
- (BOOL)_commitChangesForContext:(id)a0 forceCommit:(BOOL)a1 shouldClose:(BOOL *)a2;
- (id)_liveEditedObjectsMatchingPredicate:(id)a0 notInSet:(id)a1;
- (id)_objectsWithLiveEdits:(id)a0 matchingPredicate:(id)a1;
- (id)_openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (void)addAlias:(id)a0 eventIdentifier:(id)a1;
- (void)applyLiveChangesToObject:(id)a0;
- (void)applyLiveChangesToObjects:(id)a0;
- (id)changedObjectsCopy;
- (void)clearAllLiveChanges;
- (void)clearLiveChangesForObjects:(id)a0;
- (BOOL)closeEditingContextAndRevertIfLast:(id)a0;
- (id)eventsWithExternalIdentifier:(id)a0;
- (void)fetchEventsMatchingPredicate:(id)a0 completion:(id /* block */)a1;
- (BOOL)isHidden:(id)a0;
- (id)openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1;
- (id)openEditingContextWithObjects:(id)a0 interfaceType:(unsigned long long)a1 observer:(id)a2;
- (void)partialSaveObject:(id)a0;
- (void)performWithLock:(id /* block */)a0;

@end
