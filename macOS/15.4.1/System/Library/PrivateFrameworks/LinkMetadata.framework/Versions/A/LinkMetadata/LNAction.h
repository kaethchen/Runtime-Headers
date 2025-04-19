@class LNValueType, NSString, NSArray, NSURL, LNActionMetadata, NSNumber;

@interface LNAction : NSObject <NSSecureCoding, NSCopying, BSXPCSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) NSNumber *explicitAuthenticationPolicy;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *mangledTypeName;
@property (readonly, nonatomic) BOOL openAppWhenRun;
@property (readonly, nonatomic) NSNumber *outputFlags;
@property (readonly, nonatomic) LNValueType *outputType;
@property (readonly, copy, nonatomic) NSArray *systemProtocols;
@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) LNActionMetadata *metadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)authenticationPolicyAllowingImplicit:(BOOL)a0;
- (id)actionWithParameters:(id)a0;
- (id)actionWithURL:(id)a0;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 outputFlags:(id)a3 systemProtocols:(id)a4 parameters:(id)a5;
- (id)initWithMetadata:(id)a0 mangledName:(id)a1 parameters:(id)a2;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 outputFlags:(id)a3 outputType:(id)a4 systemProtocols:(id)a5 parameters:(id)a6;
- (id)actionWithOpenWhenRun:(BOOL)a0;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 parameters:(id)a3;
- (id)_initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 explicitAuthenticationPolicy:(id)a3 outputFlags:(id)a4 outputType:(id)a5 systemProtocols:(id)a6 parameters:(id)a7 metadata:(id)a8;
- (id)_initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 outputFlags:(id)a3 outputType:(id)a4 systemProtocols:(id)a5 parameters:(id)a6;
- (id)_initWithMetadata:(id)a0 mangledTypeName:(id)a1 parameters:(id)a2;
- (id)actionWithByMergingParameters:(id)a0;
- (id)actionWithNonSecureParameters;
- (id)actionWithPresentationStyle:(long long)a0;
- (void)enumerateParameterValuesOfValueType:(id)a0 block:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 explicitAuthenticationPolicy:(id)a3 outputFlags:(id)a4 outputType:(id)a5 systemProtocols:(id)a6 parameters:(id)a7;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 openAppWhenRun:(BOOL)a2 outputFlags:(id)a3 outputType:(id)a4 parameters:(id)a5;
- (id)initWithIdentifier:(id)a0 mangledTypeName:(id)a1 presentationStyle:(long long)a2 parameters:(id)a3;
- (id)initWithIdentifier:(id)a0 presentationStyle:(long long)a1 parameters:(id)a2;
- (id)initWithMetadata:(id)a0 bundleIdentifier:(id)a1 parameters:(id)a2;
- (id)initWithMetadata:(id)a0 mangledTypeName:(id)a1 parameters:(id)a2;

@end
