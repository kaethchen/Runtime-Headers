@class NSUUID, NSString, NSData, NSPredicate, NSDate, _MKFAppleMediaAccessory, HMFPairingIdentity, _MKFDevice, Protocol, _MKFHome, MKFResidentDatabaseID, NSNumber;
@protocol MKFHome, MKFDevice, MKFAppleMediaAccessory;

@interface _MKFResident : _MKFModel <MKFResident, MKFResidentPrivateExtensions>

@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSData *deviceIRKData;
@property (copy, nonatomic) NSString *idsDestination;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSNumber *reachable;
@property (retain, nonatomic) NSData *residentCapabilities;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFAppleMediaAccessory *appleMediaAccessory;
@property (retain, nonatomic) _MKFDevice *device;
@property (retain, nonatomic) _MKFHome *home;
@property (retain, nonatomic) NSData *deviceIRKData;
@property (copy, nonatomic) NSString *idsDestination;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMFPairingIdentity *pairingIdentity;
@property (copy, nonatomic) NSNumber *reachable;
@property (retain, nonatomic) NSData *residentCapabilities;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) id<MKFAppleMediaAccessory> appleMediaAccessory;
@property (retain, nonatomic) id<MKFDevice> device;
@property (readonly, retain, nonatomic) id<MKFHome> home;
@property (readonly, copy, nonatomic) MKFResidentDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfResident;

@end
