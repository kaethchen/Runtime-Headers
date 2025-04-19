@class Protocol, NSUUID, NSString, _MKFMatterPath, MKFMatterAttributeEventDatabaseID, NSNumber, NSDate;
@protocol MKFHome, MKFMatterPath, MKFEventTrigger;

@interface _MKFMatterAttributeEvent : _MKFEvent <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMatterAttributeEvent, MKFMatterAttributeEventPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _MKFMatterPath *matterPath;
@property (retain, nonatomic) id<MKFMatterPath> matterPath;
@property (readonly, copy, nonatomic) MKFMatterAttributeEventDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
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

- (id)castIfMatterAttributeEvent;

@end
