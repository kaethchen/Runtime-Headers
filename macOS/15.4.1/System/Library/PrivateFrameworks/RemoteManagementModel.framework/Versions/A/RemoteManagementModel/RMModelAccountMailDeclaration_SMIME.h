@class NSSet, RMModelAccountMailDeclaration_SMIMEEncryption, RMModelAccountMailDeclaration_SMIMESigning;

@interface RMModelAccountMailDeclaration_SMIME : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) RMModelAccountMailDeclaration_SMIMESigning *payloadSigning;
@property (copy, nonatomic) RMModelAccountMailDeclaration_SMIMEEncryption *payloadEncryption;

+ (id)buildRequiredOnly;
+ (id)buildWithSigning:(id)a0 encryption:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
