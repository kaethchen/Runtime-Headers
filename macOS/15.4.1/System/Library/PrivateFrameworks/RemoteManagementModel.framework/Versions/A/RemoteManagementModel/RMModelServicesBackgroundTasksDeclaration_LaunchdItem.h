@class NSSet, NSString;

@interface RMModelServicesBackgroundTasksDeclaration_LaunchdItem : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadFileAssetReference;
@property (copy, nonatomic) NSString *payloadContext;

+ (id)buildRequiredOnlyWithFileAssetReference:(id)a0 context:(id)a1;
+ (id)buildWithFileAssetReference:(id)a0 context:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
