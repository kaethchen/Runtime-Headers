@class NSArray, NSMutableSet;

@interface ViewService : HostOrService <ServiceCallsAuxiliary> {
    NSMutableSet *_spawnedRendezvousChildWindows;
    NSArray *_keyboardEventSpecs;
}

@property (readonly) BOOL allowKeyboardEvents;
@property (readonly) BOOL hasKeyboardEventSpecs;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInScreenCoords;

- (void)dealloc;
- (void)invalidate:(id)a0;
- (void)declineKeyboardEventsOtherThan:(id)a0;
- (void)_addChildWindow:(const struct { long long x0; BOOL x1; struct { unsigned long long x0; unsigned char x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned long long x4; } x2; } *)a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (void)_frameOfServiceWindowDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 windowBackgroundColor:(id)a1 reply:(id /* block */)a2;
- (void)_requestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 serviceWindowBackgroundColor:(id)a1 animate:(BOOL)a2 async:(BOOL)a3 transaction:(id)a4 completion:(id /* block */)a5;
- (id)_requestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 windowBackgroundColor:(id)a1 duringFunc:(const char *)a2 withProxyOrErrorBlock:(id /* block */)a3;
- (void)addChildWindow:(struct { long long x0; BOOL x1; struct { unsigned long long x0; unsigned char x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; unsigned int x3; unsigned long long x4; } x2; })a0 identifier:(id)a1 listenerEndpoint:(id)a2 reply:(id /* block */)a3;
- (void)allowKeyboardEvents:(BOOL)a0;
- (BOOL)eventResemblesCommandEquivalent:(struct __CGEvent { } *)a0;
- (void)frameOfServiceWindowDidChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 windowBackgroundColor:(id)a1 reply:(id /* block */)a2;
- (void)joinPair:(id)a0 window:(unsigned int)a1 reply:(id /* block */)a2;
- (void)keyboardEventHitRemoteView:(struct __CGEvent { } *)a0 from:(id)a1 reply:(id /* block */)a2;
- (void)potentialCommandEquivalentHitApplication:(id)a0 fullDispatch:(BOOL)a1 reply:(id /* block */)a2;
- (void)requestFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 serviceWindowBackgroundColor:(id)a1 animate:(BOOL)a2 async:(BOOL)a3 transaction:(id)a4 completion:(id /* block */)a5;
- (id)viewServiceWhichSpawnedRendezvousChildWindowWithIdentifier:(id)a0 amongHostsAndServices:(id)a1;
- (BOOL)wantsKeyboardEvent:(struct __CGEvent { } *)a0;
- (void)windowForContextID:(unsigned int)a0 reply:(id /* block */)a1;

@end
