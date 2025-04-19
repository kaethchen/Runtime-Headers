@class NSSet, NSNumber, NSString;

@interface RMModelNetworkEAPDeclaration_EAPSIMAKANotificationAction : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadCode;
@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSString *payloadDescription;
@property (copy, nonatomic) NSString *payloadAction;

+ (id)buildRequiredOnlyWithCode:(id)a0;
+ (id)buildWithCode:(id)a0 name:(id)a1 description:(id)a2 action:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
