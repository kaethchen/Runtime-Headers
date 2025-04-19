@class PODirectoryServices, POTokenHelper, POServiceConnection, POAuthPluginProcess;

@interface POLoginUser : NSObject {
    struct { unsigned int x0; struct *x1; } *_items;
}

@property (retain, nonatomic) POServiceConnection *serviceConnection;
@property (retain, nonatomic) POTokenHelper *tokenHelper;
@property (retain, nonatomic) PODirectoryServices *directoryServices;
@property (readonly, nonatomic) POAuthPluginProcess *userAuthPluginProcess;
@property (readonly, nonatomic) POAuthPluginProcess *systemAuthPluginProcess;
@property (nonatomic) unsigned int loginUserUid;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initForLogin:(BOOL)a0;
- (void)passwordDidChangeForUsername:(id)a0 password:(id)a1;
- (BOOL)setContextData:(char *)a0 withSize:(unsigned long long)a1 withFlags:(unsigned int)a2 forKey:(const char *)a3 engineCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a4 engine:(struct __OpaqueAuthorizationEngine { } *)a5;
- (id)contextNSData:(const char *)a0 engineCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a1 engine:(struct __OpaqueAuthorizationEngine { } *)a2;
- (id)contextStringWithoutNULL:(const char *)a0 engineCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a1 engine:(struct __OpaqueAuthorizationEngine { } *)a2;
- (id)copyRight:(const char *)a0;
- (id)extractPlatformSSOPasswordContext;
- (id)extractPlatformSSOSmartCardContext;
- (id)extractTokenId;
- (id)hintNSData:(const char *)a0 engineCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a1 engine:(struct __OpaqueAuthorizationEngine { } *)a2;
- (id)hintString:(const char *)a0 engineCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a1 engine:(struct __OpaqueAuthorizationEngine { } *)a2;
- (id)initForLogin:(BOOL)a0 userId:(unsigned int)a1;
- (BOOL)isPlatformSSOTokenLogin;
- (BOOL)isPlatformSSOUser;
- (BOOL)isRightSet:(const char *)a0;
- (void)loginWindowDidLoginForUsername:(id)a0 password:(id)a1 authorization:(struct AuthorizationOpaqueRef { } *)a2;
- (void)loginWindowWillLoginForUsername:(id)a0 password:(id)a1 authorization:(struct AuthorizationOpaqueRef { } *)a2;
- (unsigned int)performPlatformSSOAuthenticate:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a0 engine:(struct __OpaqueAuthorizationEngine { } *)a1 authenticationCallback:(id /* block */)a2;
- (void)saveCopyOfRights:(struct AuthorizationOpaqueRef { } *)a0;
- (void)setContextString:(id)a0 withFlags:(unsigned int)a1 forKey:(const char *)a2 engineCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a3 engine:(struct __OpaqueAuthorizationEngine { } *)a4;
- (void)setContextStringWithNULL:(id)a0 withFlags:(unsigned int)a1 forKey:(const char *)a2 engineCallback:(struct AuthorizationCallbacks { unsigned int x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; void /* function */ *x6; void /* function */ *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; void /* function */ *x12; void /* function */ *x13; void /* function */ *x14; void /* function */ *x15; } *)a3 engine:(struct __OpaqueAuthorizationEngine { } *)a4;

@end
