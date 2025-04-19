@class NSMapTable, NSHashTable;

@interface _NSCGSWindowOrderingProperties : NSObject {
    NSMapTable *_levelByWindow;
    NSMapTable *_orderingGroupByWindow;
    NSMapTable *_movementGroupByWindow;
    NSHashTable *_disassociateFromSpacesIfOrderedOut;
}

- (id)init;
- (void).cxx_destruct;
- (int)levelForWindow:(id)a0;
- (void)removeMovementChild:(id)a0 fromWindow:(id)a1;
- (void)addMovementChild:(id)a0 toWindow:(id)a1;
- (void)addWindow:(id)a0 toOrderingGroupAboveWindow:(id)a1;
- (void)addWindow:(id)a0 toOrderingGroupBelowWindow:(id)a1;
- (void)clearOrderingGroup:(id)a0;
- (void)disassociateFromSpacesIfOrderedOut:(id)a0;
- (void)lockWindow:(id)a0 toAbsoluteSublevel:(int)a1;
- (id)movementChildrenOfWindow:(id)a0;
- (id)orderingGroupForWindow:(id)a0;
- (void)removeWindowFromOrderingGroup:(id)a0;
- (void)setLevel:(int)a0 forWindow:(id)a1;
- (void)setMovementChildren:(id)a0 ofWindow:(id)a1;
- (void)unlockWindowSublevel:(id)a0;
- (BOOL)willDisassociateFromSpacesIfOrderedOut:(id)a0;

@end
