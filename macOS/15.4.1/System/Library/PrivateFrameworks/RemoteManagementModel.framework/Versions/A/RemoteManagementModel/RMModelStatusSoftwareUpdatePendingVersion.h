@class NSSet, NSString;

@interface RMModelStatusSoftwareUpdatePendingVersion : RMModelStatusBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusOsVersion;
@property (copy, nonatomic) NSString *statusBuildVersion;
@property (copy, nonatomic) NSString *statusTargetLocalDateTime;

+ (id)buildRequiredOnlyWithOsVersion:(id)a0 buildVersion:(id)a1;
+ (id)buildWithOsVersion:(id)a0 buildVersion:(id)a1 targetLocalDateTime:(id)a2;
+ (id)statusItemType;
+ (id)supportedOS;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isArrayValue;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
