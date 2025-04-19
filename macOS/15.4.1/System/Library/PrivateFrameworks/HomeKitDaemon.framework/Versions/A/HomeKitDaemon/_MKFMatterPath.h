@class NSUUID, NSDate, NSString, NSPredicate, NSSet, NSArray, Protocol, MKFMatterPathDatabaseID, _MKFHAPAccessory, NSNumber;
@protocol MKFHome, MKFHAPAccessory;

@interface _MKFMatterPath : _MKFModel <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMatterPath, MKFMatterPathPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly) NSPredicate *homeRelation;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSNumber *commandID;
@property (copy, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) NSNumber *eventID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) _MKFHAPAccessory *accessory;
@property (retain, nonatomic) NSSet *actionCommands_;
@property (retain, nonatomic) NSSet *eventAttributes_;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSNumber *attributeID;
@property (copy, nonatomic) NSNumber *clusterID;
@property (copy, nonatomic) NSNumber *commandID;
@property (copy, nonatomic) NSNumber *endpointID;
@property (copy, nonatomic) NSNumber *eventID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFHAPAccessory> accessory;
@property (readonly, retain, nonatomic) NSArray *actionCommands;
@property (readonly, retain, nonatomic) NSArray *eventAttributes;
@property (readonly, retain, nonatomic) NSArray *matterBulletinRegistrations;
@property (readonly, copy, nonatomic) MKFMatterPathDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

@end
