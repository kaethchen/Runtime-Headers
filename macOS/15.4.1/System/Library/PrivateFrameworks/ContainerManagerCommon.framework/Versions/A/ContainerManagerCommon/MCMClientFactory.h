@class NSString, MCMUserIdentityCache;
@protocol MCMClientCodeSignInfoCache, MCMClientIdentityCache;

@interface MCMClientFactory : NSObject <MCMClientFactoryWithXPC, MCMClientFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) MCMUserIdentityCache *userIdentityCache;
@property (readonly, nonatomic) id<MCMClientCodeSignInfoCache> clientCodeSignInfoCache;
@property (readonly, nonatomic) id<MCMClientIdentityCache> clientIdentityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_codeSignInfoWithClient:(struct container_client { unsigned long long x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; struct { unsigned int x0[8]; } x7; int x8; BOOL x9; BOOL x10; BOOL x11; id x12; } *)a0 CDHash:(id)a1 identifier:(id)a2 teamIdentifier:(id)a3 error:(id *)a4;
- (id)_clientIdentityWithClient:(struct container_client { unsigned long long x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; struct { unsigned int x0[8]; } x7; int x8; BOOL x9; BOOL x10; BOOL x11; id x12; } *)a0 proximateClient:(id)a1 error:(id *)a2;
- (id)_clientIdentityWithClientMessageContext:(id)a0 error:(id *)a1;
- (id)_proxiedClientIdentityFromMessage:(id)a0 proximateClient:(id)a1 error:(id *)a2;
- (id)clientIdentityWithClientMessageContext:(id)a0 xpcMessage:(id)a1 error:(id *)a2;
- (id)initWithUserIdentityCache:(id)a0 clientCodeSignInfoCache:(id)a1 clientIdentityCache:(id)a2;

@end
