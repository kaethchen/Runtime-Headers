@class STCoreUser, NSString, NSSet, NSData, STCoreDevice, NSDate;

@interface STUserDeviceState : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (class, readonly) NSString *serializableClassName;

@property (nonatomic) BOOL screenTimeEnabled;
@property (nonatomic) BOOL cloudSyncEnabled;
@property (nonatomic) BOOL managementEnabled;
@property (copy, nonatomic) NSString *passcodeOwner;
@property (copy, nonatomic) NSData *capabilitiesPlist;
@property (copy, nonatomic) NSData *deviceInfoPlist;
@property (retain, nonatomic) STCoreUser *localUser;
@property (retain, nonatomic) STCoreDevice *localDevice;
@property (retain, nonatomic) STCoreUser *user;
@property (retain, nonatomic) STCoreDevice *device;
@property (retain, nonatomic) NSSet *installedApps;
@property (nonatomic) long long msInterventionPolicy;
@property (copy, nonatomic) NSDate *lastFamilyCheckinDate;
@property (copy, nonatomic) NSString *coreDuetIdentifier;
@property BOOL isLegacyUsageDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)_getCoreDuetIdentifier;
+ (id)fetchLocalUserDeviceStateInContext:(id)a0 error:(id *)a1;
+ (id)fetchOrCreateLocalUserDeviceStateInContext:(id)a0 error:(id *)a1;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchRequestMatchingLocalUserDeviceState;
+ (BOOL)isUnitTestRunning;

- (void)didChangeValueForKey:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)validateForDelete:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)_validateCoreDuetIdentifier:(id)a0;
- (BOOL)_validateLocalUserDeviceState:(id)a0;
- (BOOL)_validateNumberOfLocalUserDeviceStates:(id)a0;
- (id)computeUniqueIdentifier;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;

@end
