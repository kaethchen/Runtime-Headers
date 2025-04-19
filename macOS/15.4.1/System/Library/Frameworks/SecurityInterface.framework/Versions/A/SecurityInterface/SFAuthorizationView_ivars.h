@class NSData, NSString, SFAnimatedLockButton, NSDictionary, NSMutableArray, SFAuthorization, NSObject, NSButton;
@protocol OS_dispatch_queue;

@interface SFAuthorizationView_ivars : NSObject {
    SFAnimatedLockButton *_lockIconButton;
    NSButton *_textButton;
    NSString *_textButtonString;
    NSMutableArray *_constraints;
    struct { unsigned int x0; struct *x1; } *_authorizationRights;
    SFAuthorization *_authorization;
    id _delegate;
    int _currentState;
    BOOL _authorized;
    double _timeInterval;
    unsigned int _flags;
    BOOL _initiallyLockedOrHidden;
    NSDictionary *_textAttributes;
    BOOL _asyncOperation;
    NSObject<OS_dispatch_queue> *_interactiveHandlingQueue;
    BOOL _initialized;
    NSData *_lacontext;
}

- (void)dealloc;

@end
