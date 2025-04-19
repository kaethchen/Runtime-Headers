@class NSDictionary, NSObject;
@protocol OS_os_log;

@interface AUDeveloperSettingsDatabase : NSObject {
    NSObject<OS_os_log> *_log;
}

@property (readonly) NSDictionary *accessoriesDictionary;

+ (id)sharedDatabase;

- (id)init;
- (void).cxx_destruct;
- (id)accessoryList;
- (void)removeAccessory:(id)a0;
- (void)updateAccessory:(id)a0;
- (void)accessoryNameForIdentifier:(id)a0 name:(id *)a1 serialNumber:(id *)a2 fusingType:(unsigned long long *)a3;
- (void)addAccessoryWithSerialNumber:(id)a0 info:(id)a1;
- (id)copyAccessoryForSignature:(id)a0 modelNumber:(id)a1 fusingType:(id)a2 partnerSerialNumbers:(id)a3;
- (id)copyAccessoryWithSerialNumber:(id)a0;
- (BOOL)isSeedParticipationEnabled:(id)a0;
- (BOOL)isValidLocationType:(unsigned long long)a0;
- (void)removeAccessoryWithSerialNumber:(id)a0;
- (void)setAccessoriesDictionary:(id)a0;
- (void)updateAccessory:(id)a0 locationType:(unsigned long long)a1;
- (void)updateAccessoryWithSerialNumber:(id)a0 info:(id)a1;
- (unsigned long long)urlLocationTypeForAccessory:(id)a0;

@end
