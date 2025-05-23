@class NSSet, NSString, NSArray, RMModelStatusServicesBackgroundTask_LaunchdDeviceManagement;

@interface RMModelStatusServicesBackgroundTask_Launchd : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusLabel;
@property (copy, nonatomic) NSString *statusProgram;
@property (copy, nonatomic) NSArray *statusProgramArguments;
@property (copy, nonatomic) NSString *statusChecksum;
@property (copy, nonatomic) RMModelStatusServicesBackgroundTask_LaunchdDeviceManagement *statusDeviceManagement;

+ (id)buildRequiredOnlyWithLabel:(id)a0 program:(id)a1 checksum:(id)a2;
+ (id)buildWithLabel:(id)a0 program:(id)a1 programArguments:(id)a2 checksum:(id)a3 deviceManagement:(id)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
