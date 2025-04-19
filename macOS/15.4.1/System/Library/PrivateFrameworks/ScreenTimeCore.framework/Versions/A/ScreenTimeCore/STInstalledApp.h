@class NSString, STUserDeviceState, NSData, NSNumber;

@interface STInstalledApp : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>

@property (class, readonly) NSString *serializableClassName;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) STUserDeviceState *userDeviceState;
@property (nonatomic) BOOL installedLocally;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *distributorID;
@property (nonatomic) BOOL distributorIsThirdParty;
@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSNumber *versionIdentifier;
@property (copy, nonatomic) NSNumber *betaVersionIdentifier;
@property (copy, nonatomic) NSData *iconData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)bundleIdentifiersInstalledForAltDSID:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)bundleIdentifiersInstalledForDSID:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)bundleIdentifiersInstalledForPredicate:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;

- (void)didChangeValueForKey:(id)a0;
- (id)dictionaryRepresentation;
- (id)computeUniqueIdentifier;
- (void)setUserDeviceState:(id)a0;
- (void)updateIconDataWithURL:(id)a0;
- (BOOL)updateWithDictionaryRepresentation:(id)a0;

@end
