@class NSString, NSMutableDictionary, NSMutableSet, BSServiceDomainSpecification, BSServiceConnectionListener;

@interface FBServiceFacilityServer : NSObject <BSServiceConnectionListenerDelegate, FBSServiceFacilityManaging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSServiceConnectionListener *_serviceListener;
    NSMutableDictionary *_lock_facilitiesByIdentifier;
    NSMutableSet *_lock_completedMilestones;
    NSMutableDictionary *_lock_suspendedFacilitiesByIdentifier;
    NSMutableSet *_lock_pendingConnects;
}

@property (readonly, copy, nonatomic) BSServiceDomainSpecification *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedInstanceDomain;

- (void)dealloc;
- (id)init;
- (void)run;
- (void).cxx_destruct;
- (id)_initWithDomain:(id)a0;
- (void)removeFacility:(id)a0;
- (void)addFacility:(id)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_facilityQueue_facility:(id)a0 handleMessage:(id)a1 client:(id)a2;
- (BOOL)_lock_areFacilityPrerequisitesSatisfied:(id)a0;
- (void)_lock_evaluateSuspendedFacility:(id)a0;
- (void)noteMilestoneReached:(id)a0;

@end
