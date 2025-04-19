@class NSString, NSXPCConnection, SK_DM_Daemon2ClientDelegate, NSPort, NSLocale;
@protocol SK_DM_Client2DaemonProtocol;

@interface DMManagerPrivVars : NSObject {
    struct __DASession { } *_clientDefaultDASession;
    id _clientDelegate;
    unsigned int _clientThread;
    struct AuthorizationOpaqueRef { } *_implicitAuthorization;
    struct AuthorizationOpaqueRef { } *_explicitAuthorization;
    BOOL _authorizationUIOK;
    NSLocale *_locale;
    NSString *_preferredLocale;
    BOOL _installEnvironment;
    BOOL _delegateCreated;
    id<SK_DM_Client2DaemonProtocol> _SK_DM_delegate;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) id<SK_DM_Client2DaemonProtocol> SK_DM_delegate;
@property (readonly, nonatomic) NSPort *callbackPort;
@property (readonly, nonatomic) SK_DM_Daemon2ClientDelegate *callbackDelegate;

- (void)dealloc;
- (void)createXPCConnection;
- (int)beginXPCSessionWithAuthorization:(struct { char x0[32]; })a0;
- (id)initWithDirectConnection:(BOOL)a0;
- (BOOL)setDirectSK_DM_Delegate:(id)a0;
- (void)startSession;

@end
