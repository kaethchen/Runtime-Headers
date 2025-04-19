@class NSString, NSObject;
@protocol MCMCommandContext, OS_xpc_object;

@interface MCMXPCMessageBase : NSObject <MCMXPCMessage>

@property (readonly, nonatomic) id<MCMCommandContext> context;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (readonly, nonatomic) struct container_client { unsigned long long x0; char *x1; char *x2; unsigned int x3; char *x4; unsigned int x5; unsigned int x6; struct { unsigned int x0[8]; } x7; int x8; BOOL x9; BOOL x10; BOOL x11; id x12; } *proxy;
@property (readonly, nonatomic) unsigned int platform;
@property (readonly, nonatomic) unsigned int disposition;
@property (readonly, nonatomic) unsigned long long command;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userIdentityForContainerIdentifier:(id)a0 clientIdentity:(id)a1 containerClass:(unsigned long long)a2 error:(unsigned long long *)a3;
+ (id)xpcMessageFromXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)nsStringValueFromXPCObject:(id)a0 key:(const char *)a1;
- (id)userIdentityFromClientPersonaUniqueString:(id)a0 clientIdentity:(id)a1 error:(unsigned long long *)a2;
- (id)identifierFromXPCObject:(id)a0 elseClientIdentifier:(id)a1;
- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (id)nsObjectFromXPCObject:(id)a0 key:(const char *)a1 error:(unsigned long long *)a2;
- (id)nsUUIDValueFromXPCObject:(id)a0 key:(const char *)a1;

@end
