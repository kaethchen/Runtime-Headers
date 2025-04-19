@class NSSet, NSString, CRKFeatureDataStoreHeuristics_MCX;
@protocol CRKMCXPrimitives;

@interface CRKFeatureDataStore_MCX : NSObject <CRKFeatureDataStoreProtocol>

@property (readonly, nonatomic) id<CRKMCXPrimitives> MCXPrimitives;
@property (copy, nonatomic) NSSet *activeClassroomRoles;
@property (retain, nonatomic) CRKFeatureDataStoreHeuristics_MCX *heuristicsManager;
@property (readonly, nonatomic, getter=isClassroomUnpromptedScreenObservationForced) BOOL classroomUnpromptedScreenObservationForced;
@property (readonly, nonatomic, getter=isClassroomAutomaticClassJoiningForced) BOOL classroomAutomaticClassJoiningForced;
@property (readonly, nonatomic, getter=isClassroomRequestPermissionToLeaveClassesForced) BOOL classroomRequestPermissionToLeaveClassesForced;
@property (nonatomic, getter=isClassroomStudentRoleEnabled) BOOL classroomStudentRoleEnabled;
@property (nonatomic, getter=isClassroomInstructorRoleEnabled) BOOL classroomInstructorRoleEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addActiveClassroomRole:(id)a0;
- (unsigned long long)boolRestrictionForFeature:(id)a0;
- (unsigned long long)effectiveBoolValueForSetting:(id)a0 outAsk:(BOOL *)a1;
- (unsigned long long)effectiveValueForSetting:(id)a0 configurationUUID:(id)a1 outAsk:(BOOL *)a2;
- (id)initWithMCXPrimitives:(id)a0;
- (BOOL)isFeatureForced:(id)a0;
- (BOOL)isRoleEnabled:(id)a0;
- (id)keyForFeature:(id)a0 configurationUUID:(id)a1 ask:(BOOL)a2;
- (void)removeActiveClassroomRole:(id)a0;
- (void)removeDuplicateEntriesFromStoredClassroomRoles;
- (void)setBoolValue:(BOOL)a0 ask:(BOOL)a1 forSetting:(id)a2;
- (void)setBoolValue:(BOOL)a0 ask:(BOOL)a1 forSetting:(id)a2 configurationUUID:(id)a3;
- (void)setRole:(id)a0 enabled:(BOOL)a1;

@end
