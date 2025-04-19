@class REMBaseSectionStorage, NSString, NSDate, REMObjectID, REMChangedKeysObserver, REMAccountCapabilities, REMResolutionTokenMap, REMSaveRequest, NSData;

@interface REMBaseSectionChangeItem : NSObject <REMSupportedVersionProviding, REMSupportedVersionUpdating, REMConflictResolving, REMSaveRequestTrackedValue>

@property (retain, nonatomic) REMChangedKeysObserver *changedKeysObserver;
@property (readonly, nonatomic) REMSaveRequest *saveRequest;
@property (retain, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMAccountCapabilities *accountCapabilities;
@property (retain, nonatomic) REMBaseSectionStorage *storage;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMObjectID *parentID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (readonly, nonatomic) long long minimumSupportedVersion;
@property (readonly, nonatomic) long long effectiveMinimumSupportedVersion;
@property (retain, nonatomic) REMResolutionTokenMap *resolutionTokenMap;
@property (retain, nonatomic) NSData *resolutionTokenMapData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;
+ (id)keysToObserve;

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)changedKeys;
- (BOOL)isUnsupported;
- (id)accountCapabilities;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 accountCapabilities:(id)a2 changedKeysObserver:(id)a3;
- (id)initWithSaveRequest:(id)a0 storage:(id)a1 accountCapabilities:(id)a2 observeInitialValues:(BOOL)a3;
- (id)resolutionTokenKeyForChangedKey:(id)a0;
- (id)shallowCopyWithSaveRequest:(id)a0;

@end
