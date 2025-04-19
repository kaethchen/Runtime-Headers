@class NSSet, NSString;

@interface RMModelScreenSharingConnectionDeclaration_DisplayConfiguration : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDisplayType;

+ (id)buildRequiredOnlyWithDisplayType:(id)a0;
+ (id)buildWithDisplayType:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
