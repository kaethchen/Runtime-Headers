@class AXFUIElement, NSMutableDictionary, NSString, NSLock;
@protocol AXKKeyboardFocusSearchDelegate, AXKFocusManagerDelegate;

@interface AXKFocusManager : NSObject <AXKWorkspaceObserver>

@property (class, readonly, nonatomic) AXFUIElement *keyboardFocusedApplicationElement;
@property (class, readonly, nonatomic) AXFUIElement *keyboardFocusedElement;

@property (retain, nonatomic) NSMutableDictionary *focusChains;
@property (retain, nonatomic) NSLock *focusChainLock;
@property (retain, nonatomic) id<AXKKeyboardFocusSearchDelegate> searchDelegate;
@property (retain, nonatomic) id<AXKFocusManagerDelegate> focusDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)focusedElementControllerForApplication:(id)a0;
- (void)setFocusedElementController:(id)a0;
- (void)setFocusedElementController:(id)a0 forApplication:(id)a1;
- (void)workspaceManager:(id)a0 didUpdateFrontmostApplicationController:(id)a1;
- (void)workspaceManager:(id)a0 didUpdateRunningApplications:(id)a1;

@end
