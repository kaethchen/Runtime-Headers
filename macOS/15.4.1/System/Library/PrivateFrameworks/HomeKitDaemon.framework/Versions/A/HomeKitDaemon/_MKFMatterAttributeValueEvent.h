@class Protocol, NSUUID, NSString, NSNumber, NSDate, NSObject, MKFMatterAttributeValueEventDatabaseID;
@protocol MKFHome, MKFMatterPath, MKFEventTrigger;

@interface _MKFMatterAttributeValueEvent : _MKFMatterAttributeEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMatterAttributeValueEvent, MKFMatterAttributeValueEventPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSObject *eventValue;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject *eventValue;
@property (readonly, copy, nonatomic) MKFMatterAttributeValueEventDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (retain, nonatomic) id<MKFMatterPath> matterPath;
@property (copy, nonatomic) NSNumber *endEvent;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFEventTrigger> trigger;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (id)castIfMatterAttributeValueEvent;

@end
