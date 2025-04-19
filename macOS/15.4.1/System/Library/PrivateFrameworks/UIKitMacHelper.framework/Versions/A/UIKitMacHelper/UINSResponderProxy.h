@class NSString;
@protocol UINSMenuItem;

@interface UINSResponderProxy : NSResponder <NSUserInterfaceValidations, NSMenuItemValidation, NSToolbarItemValidation>

@property (readonly, nonatomic) id wrappedResponder;
@property (readonly, nonatomic) id<UINSMenuItem> wrappedMenuProxy;
@property (readonly, nonatomic) SEL action;
@property (readonly, nonatomic) id sender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_createResponderProxyWithFoundTarget:(id)a0 action:(SEL)a1 sender:(id)a2;
+ (id)_maybeCreateResponderProxyForAction:(SEL)a0 forSender:(id)a1 withWindow:(id)a2 usingSearchBlock:(id /* block */)a3;
+ (id)_responderChainDebugInfoForLocation:(id)a0 forAction:(SEL)a1 withSearch:(id /* block */)a2;
+ (id)responderChainDebugInfoSearchingFromAppForAction:(SEL)a0 withSender:(id)a1;
+ (id)responderChainDebugInfoSearchingFromFirstResponderForInputView:(id)a0 forAction:(SEL)a1 withSender:(id)a2;
+ (id)responderChainDebugInfoSearchingFromWindow:(id)a0 forAction:(SEL)a1 withSender:(id)a2;
+ (id)responderProxySearchingFromAppWithTargetForAction:(SEL)a0 sender:(id)a1;
+ (id)responderProxySearchingFromFirstResponderWithTargetForAction:(SEL)a0 sender:(id)a1 inputView:(id)a2;
+ (id)responderProxySearchingFromWindowWithTargetForAction:(SEL)a0 sender:(id)a1 window:(id)a2;

- (void)forwardInvocation:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)undoManager;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)validateToolbarItem:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (id)_initWithWrappedResponder:(id)a0 orMenuProxy:(id)a1 forAction:(SEL)a2 sender:(id)a3;
- (void)_performMenuProxyActionForSender:(id)a0;
- (BOOL)_validateTheUIKitWay:(id)a0;

@end
