@class NSSet, NSString, NSArray, NSNumber;

@interface RMModelNetworkEAPDeclaration_EAPSIMAKA : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadNumberOfRANDs;
@property (copy, nonatomic) NSString *payloadRealm;
@property (copy, nonatomic) NSArray *payloadNotificationActions;

+ (id)buildRequiredOnly;
+ (id)buildWithNumberOfRANDs:(id)a0 realm:(id)a1 notificationActions:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
