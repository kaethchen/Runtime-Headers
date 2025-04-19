@class NSString, NSRemoteView;

@interface NSFakeServiceResponder : NSObject <NSServiceViewControllerActionResponder> {
    SEL _action;
    unsigned int _rtsInProgress;
    NSRemoteView *_remoteView;
    struct { BOOL responds; BOOL response; } _validateMenuItem;
    struct { BOOL responds; BOOL response; } _validateUserInterfaceItem;
    NSString *_targetIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _retainReleaseLock;
}

- (oneway void)release;
- (void)dealloc;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)retain;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)__vbSuperRelease;
- (void)__vbWithLockPerform:(id /* block */)a0;
- (id)initWithView:(id)a0 action:(SEL)a1 validateMenuItem:(struct { BOOL x0; BOOL x1; })a2 validateUserInterfaceItem:(struct { BOOL x0; BOOL x1; })a3 targetIdentifier:(id)a4;
- (BOOL)respondsToAction:(SEL)a0 fromTask:(struct { unsigned int x0[8]; })a1;
- (struct os_unfair_lock_s { unsigned int x0; } *)retainReleaseLock;

@end
