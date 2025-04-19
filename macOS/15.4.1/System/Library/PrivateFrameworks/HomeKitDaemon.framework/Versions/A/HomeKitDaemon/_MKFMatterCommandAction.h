@class NSUUID, NSString, NSArray, NSDate, NSSet, MKFMatterCommandActionDatabaseID, Protocol, NSNumber;
@protocol MKFHome, MKFActionSet;

@interface _MKFMatterCommandAction : _MKFAction <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFMatterCommandAction, MKFMatterCommandActionPrivateExtensions>

@property (class, readonly) Class cd_modelClass;
@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (retain, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *enforceExecutionOrder;
@property (retain, nonatomic) NSSet *matterPaths_;
@property (readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property (readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSNumber *enforceExecutionOrder;
@property (readonly, retain, nonatomic) NSArray *matterPaths;
@property (readonly, copy, nonatomic) MKFMatterCommandActionDatabaseID *databaseID;
@property (readonly) id<MKFHome> home;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) id<MKFActionSet> actionSet;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;
+ (id)modelIDForParentRelationshipTo:(id)a0;

- (void)addMatterPathsObject:(id)a0;
- (id)castIfMatterCommandAction;
- (void)removeMatterPathsObject:(id)a0;

@end
