@class NSString, _NSCGSWindowLocalOrderingState, _NSCGSWindowOrderingProperties, NSMutableArray;

@interface _NSCGSWindowOrdering : NSObject <_NSCGSWindowOrderingState> {
    NSMutableArray *_operations;
    _NSCGSWindowOrderingProperties *_transactionProperties;
    _NSCGSWindowLocalOrderingState *_localState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentOrdering;

- (id)init;
- (void).cxx_destruct;
- (id)_windowsWithOptions:(unsigned int)a0 onSpaces:(id)a1 xorSpacesMatching:(unsigned int)a2 forConnectionID:(unsigned int)a3;
- (int)levelForWindow:(id)a0;
- (id)onScreenWindowsForConnectionID:(unsigned int)a0;
- (void)removeMovementChild:(id)a0 fromWindow:(id)a1;
- (BOOL)_hasUncommittedSpaceAssignmentChanges:(id)a0;
- (void)addMovementChild:(id)a0 toWindow:(id)a1;
- (void)addWindow:(id)a0 toOrderingGroupAboveWindow:(id)a1;
- (void)addWindow:(id)a0 toOrderingGroupBelowWindow:(id)a1;
- (void)clearOrderingGroup:(id)a0;
- (void)conditionallyOrderGroupFront:(id)a0 withTimestamp:(double)a1;
- (void)disableActivationOrderingForWindow:(id)a0 isInitiallyOrderedIn:(BOOL)a1;
- (void)disassociateFromSpacesIfOrderedOut:(id)a0;
- (void)enableActivationOrderingForWindow:(id)a0 isInitiallyOrderedIn:(BOOL)a1;
- (BOOL)isWindowOrderedIn:(id)a0;
- (void)lockWindow:(id)a0 toAbsoluteSublevel:(int)a1;
- (id)movementChildrenOfWindow:(id)a0;
- (unsigned long long)onScreenWindowsCountForConnectionID:(unsigned int)a0;
- (void)orderApplicationWindowsFront;
- (void)orderGroup:(id)a0 op:(int)a1 againstWindow:(id)a2;
- (void)orderGroupIfActive:(id)a0 op:(int)a1 againstWindow:(id)a2;
- (void)orderWindow:(id)a0 op:(int)a1 againstWindow:(id)a2;
- (id)orderingGroupForWindow:(id)a0;
- (void)removeWindowFromOrderingGroup:(id)a0;
- (void)setLevel:(int)a0 forWindow:(id)a1;
- (void)setMovementChildren:(id)a0 ofWindow:(id)a1;
- (void)unlockWindowSublevel:(id)a0;
- (id)windowsWithOptions:(unsigned int)a0 onSpaces:(id)a1 forConnectionID:(unsigned int)a2;
- (id)windowsWithOptions:(unsigned int)a0 onSpacesMatching:(unsigned int)a1 forConnectionID:(unsigned int)a2;

@end
