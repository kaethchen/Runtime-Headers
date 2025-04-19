@class NSNumber, NSSet, EKEventStore, NSString, NSMutableArray, CUIKObjectGroup;

@interface CUIKEditingContextGroup : NSObject <CUIKEditingContextObserver>

@property (retain) CUIKObjectGroup *objectGroup;
@property (retain) NSMutableArray *additionalObjectGroups;
@property (retain) NSSet *openContexts;
@property (retain) NSNumber *spanDecisionAsNumber;
@property (retain) NSNumber *earlyCommitDecisionAsNumber;
@property (weak) EKEventStore *eventStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeContext:(id)a0;
- (id)trackedObjects;
- (BOOL)isTestObserver;
- (id)oldObject:(id)a0 didUpdateTo:(id)a1;
- (void)addContext:(id)a0;
- (id)objectsToCommit;
- (id)originalObjects;
- (id)activeEditingContexts;
- (id)activeEditingContextsExcludingContext:(id)a0;
- (void)addAdditionalObjects:(id)a0;
- (unsigned long long)earlyCommitDecisionForGroup;
- (BOOL)earlyCommitDecisionForGroupIsSet;
- (id)initWithObjectGroup:(id)a0;
- (id)newIdentifierForIdentifier:(id)a0;
- (unsigned long long)spanDecisionForGroup;
- (BOOL)spanDecisionForGroupIsSet;
- (void)specifyEarlyCommitDecisionForGroup:(unsigned long long)a0;
- (void)specifySpanDecisionForGroup:(unsigned long long)a0;
- (void)unspecifyEarlyCommitDecisionForGroup;
- (void)unspecifySpanDecisionForGroup;

@end
