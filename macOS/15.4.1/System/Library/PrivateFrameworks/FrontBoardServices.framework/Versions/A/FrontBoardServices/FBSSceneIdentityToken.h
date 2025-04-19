@class NSString, BSServiceConnectionEndpoint, RBSProcessIdentity;

@interface FBSSceneIdentityToken : NSObject <BSXPCSecureCoding, BSXPCCoding, NSSecureCoding, NSCopying> {
    BSServiceConnectionEndpoint *_endpoint;
    RBSProcessIdentity *_target;
    NSString *_workspace;
    int _host;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BSServiceConnectionEndpoint *hostEndpoint;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *stringRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;
+ (id)pseudoTokenWithIdentifier:(id)a0;
+ (id)tokenWithHostEndpoint:(id)a0 workspace:(id)a1 identifier:(id)a2;
+ (id)tokenWithHostPID:(int)a0 directEndpointTarget:(id)a1 workspace:(id)a2 identifier:(id)a3;
+ (id)tokenWithHostPID:(int)a0 viewServiceSessionIdentifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;

@end
