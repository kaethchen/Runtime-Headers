@class NSSet, NSArray, NSString;

@interface RMModelStatusSoftwareUpdateInstallReason : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSArray *statusReason;
@property (copy, nonatomic) NSString *statusDeclarationId;

+ (id)buildRequiredOnlyWithReason:(id)a0;
+ (id)buildWithReason:(id)a0 declarationId:(id)a1;
+ (id)statusItemType;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isArrayValue;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
