@class NSSet, NSString, RMModelAppManagedDeclaration_InstallBehaviorLicense;

@interface RMModelAppManagedDeclaration_InstallBehavior : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadInstall;
@property (copy, nonatomic) RMModelAppManagedDeclaration_InstallBehaviorLicense *payloadLicense;

+ (id)buildRequiredOnly;
+ (id)buildWithInstall:(id)a0 license:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
