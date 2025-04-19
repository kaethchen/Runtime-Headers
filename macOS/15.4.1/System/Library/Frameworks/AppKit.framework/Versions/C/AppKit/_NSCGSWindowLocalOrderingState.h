@class NSArray, NSString, NSPointerArray, _NSCGSWindowOrderingProperties;

@interface _NSCGSWindowLocalOrderingState : NSObject <_NSCGSWindowOrderingState> {
    NSPointerArray *_orderedWindows;
    _NSCGSWindowOrderingProperties *_properties;
}

@property (readonly) NSArray *orderedWindows;
@property (readonly) _NSCGSWindowOrderingProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeMovementChild:(id)a0 fromWindow:(id)a1;
- (void)addMovementChild:(id)a0 toWindow:(id)a1;
- (void)addWindow:(id)a0 toOrderingGroupAboveWindow:(id)a1;
- (void)addWindow:(id)a0 toOrderingGroupBelowWindow:(id)a1;
- (void)clearOrderingGroup:(id)a0;
- (void)conditionallyOrderGroupFront:(id)a0 withTimestamp:(double)a1;
- (void)disassociateFromSpacesIfOrderedOut:(id)a0;
- (id)initWithWindows:(id)a0;
- (void)lockWindow:(id)a0 toAbsoluteSublevel:(int)a1;
- (id)movementChildrenOfWindow:(id)a0;
- (void)orderApplicationWindowsFront;
- (void)orderGroup:(id)a0 op:(int)a1 againstWindow:(id)a2;
- (void)orderWindow:(id)a0 op:(int)a1 againstWindow:(id)a2;
- (void)removeWindowFromOrderingGroup:(id)a0;
- (void)setLevel:(int)a0 forWindow:(id)a1;
- (void)setMovementChildren:(id)a0 ofWindow:(id)a1;
- (void)unlockWindowSublevel:(id)a0;

@end
