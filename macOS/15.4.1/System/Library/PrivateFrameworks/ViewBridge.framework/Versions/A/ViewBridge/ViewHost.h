@class NSString;

@interface ViewHost : HostOrService <HostCallsAuxiliary> {
    unsigned int _seed;
    NSString *_rendezvousWindowIdentifier;
    unsigned char _hostAppIsActive : 1;
    unsigned char _hostWindowInhibitsOrdering : 1;
    unsigned char _keyTestWindowIsKey : 1;
    unsigned char _remoteViewIsFirstResponder : 1;
    unsigned char _wantsAggressiveKeyboardFocusTheftCancellation : 1;
    unsigned char _mayAttemptCommandEquivalentAtWill : 2;
}

@property (readonly) BOOL hostWindowInhibitedOrdering;
@property (readonly) BOOL hostAppIsActive;
@property (readonly) BOOL keyTestWindowIsKey;
@property (readonly) BOOL remoteViewIsFirstResponder;
@property (readonly) BOOL wantsAggressiveKeyboardFocusTheftCancellation;
@property (readonly) unsigned char hostWindowKind;
@property (readonly) unsigned char hostWindowBase;
@property (readonly) unsigned int seed;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInScreenCoords;
@property (copy) NSString *serviceViewControllerIdentifier;

+ (id)ultimateAncestor:(id)a0 forApp:(struct { unsigned int x0[8]; })a1;
+ (id)ultimateAncestorOfWindow:(unsigned int)a0 inDictionaryOfHostsAndServices:(id)a1;
+ (id)ultimateAncestorOfWindow:(unsigned int)a0 inDictionaryOfHostsAndServices:(id)a1 consideringEachViewHost:(id /* block */)a2;

- (void)dealloc;
- (void)invalidate:(id)a0;
- (void)bumpSeed;
- (void)joinPair:(id)a0 serviceViewControllerIdentifier:(id)a1 frameInScreenCoords:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 hostWindowKind:(unsigned char)a3 hostWindowBase:(unsigned char)a4 reply:(id /* block */)a5;
- (void)keyboardEventHitRemoteView:(id)a0 reply:(id /* block */)a1;
- (void)killViewService:(id /* block */)a0;
- (BOOL)mayAttemptCommandEquivalentAtWill;
- (void)potentialCommandEquivalentHitServiceApp:(struct __CGEvent { } *)a0 from:(id)a1 fullDispatch:(BOOL)a2 reply:(id /* block */)a3;
- (void)remoteViewBecameAssociatedWithWindow:(unsigned int)a0 rvs:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; struct { BOOL x0; BOOL x1; } x4; })a1 reply:(id /* block */)a2;
- (void)remoteViewBecameFirstResponderForWindowWithState:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; struct { BOOL x0; BOOL x1; } x4; })a0;
- (void)remoteViewKeyTestWindowBecameKey:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; struct { BOOL x0; BOOL x1; } x4; })a0;
- (void)remoteViewKeyTestWindowResignedKey;
- (void)remoteViewResignedFirstResponderInService:(id)a0 forWindowWithKey:(BOOL)a1 inActiveApp:(BOOL)a2 wantsAggressiveKeyboardFocusTheftCancellation:(BOOL)a3;
- (struct __LSASN { } *)ultimateHostAppSerialNumber;
- (void)updateFrameInScreenCoords:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
