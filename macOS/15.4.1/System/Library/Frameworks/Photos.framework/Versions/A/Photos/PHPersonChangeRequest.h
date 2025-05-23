@class PHUserFeedback, NSString, PHRelationshipChangeRequestHelper, PHPerson, NSSet, NSManagedObjectID, NSDictionary, PHObjectPlaceholder, NSMutableArray, NSMutableSet;
@protocol PLChangesForServiceHandling;

@interface PHPersonChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    NSMutableArray *_personUUIDsToMerge;
    NSString *_nominalMergeTargetUUID;
    NSMutableSet *_faceUUIDsRequiringFaceCropGeneration;
    NSMutableSet *_rejectedMergeCandidatePersonUUIDs;
    NSMutableSet *_graphDedupePersonUUIDs;
    NSMutableSet *_faceUUIDsRequiringNewUnverifiedPerson;
    BOOL _didUnsetUserFeedback;
    BOOL _didUnsetAutonamingUserFeedbacks;
    NSMutableArray *_searchEntityRelationsToSet;
    NSMutableArray *_searchEntityRelationsToRemove;
}

@property (nonatomic) short keyFacePickSource;
@property (nonatomic) unsigned short suggestedForClientType;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *detectedFacesHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *temporalFacesHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyFaceHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *rejectedFacesHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *mergeCandidatesHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *mergeCandidatesWithConfidenceHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *invalidMergeCandidatesHelper;
@property (retain, nonatomic) PHPerson *targetPerson;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedPerson;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long manualOrder;
@property (nonatomic) double mergeCandidateConfidence;
@property (copy, nonatomic) NSString *personUri;
@property (nonatomic, getter=isInPersonNamingModel) BOOL inPersonNamingModel;
@property (nonatomic, getter=isVerified) BOOL verified;
@property (nonatomic) long long verifiedType;
@property (nonatomic) unsigned short questionType;
@property (nonatomic) unsigned short ageType;
@property (nonatomic) unsigned short genderType;
@property (nonatomic) unsigned short sexType;
@property (copy, nonatomic) NSDictionary *contactMatchingDictionary;
@property (nonatomic) short detectionType;
@property (nonatomic) long long assetSortOrder;
@property (copy, nonatomic) PHUserFeedback *userFeedback;
@property (copy, nonatomic) NSSet *autonamingUserFeedbacks;
@property (copy, nonatomic) NSString *mdID;
@property (readonly) BOOL isNewRequest;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) id<PLChangesForServiceHandling> changesForServiceHandler;
@property (readonly, nonatomic) NSString *changeTypeForSummary;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (nonatomic) BOOL shouldPerformConcurrentWork;

+ (id)changeRequestForMergingPersons:(id)a0;
+ (BOOL)_allPersonsAreGraphPersons:(id)a0;
+ (id)changeRequestForDedupingGraphPersons:(id)a0;
+ (id)changeRequestForDedupingGraphPersons:(id)a0 withUserVerifiedPerson:(id)a1;
+ (id)changeRequestForMergingPersons:(id)a0 nominalTargetIdentifier:(id)a1;
+ (id)changeRequestForPerson:(id)a0;
+ (id)changeRequestsForMergeCandidatePersons:(id)a0;
+ (id)creationRequestForPerson;
+ (void)deletePersons:(id)a0;

- (void).cxx_destruct;
- (void)_addObjectIDsOfFaces:(id)a0 toFaceIDs:(id)a1 temporalIDs:(id)a2;
- (BOOL)_containsUserMutations;
- (BOOL)_ensureModelConsistencyForVerifiedTypePromotion:(id)a0 originalVerifiedType:(int)a1 error:(id *)a2;
- (id)_existentFaceObjectIDs;
- (id)_existentInvalidMergeCandidateObjectIDs;
- (id)_existentMergeCandidateObjectIDs;
- (id)_existentMergeCandidateWithConfidenceObjectIDs;
- (id)_existentRejectedFaceObjectIDs;
- (id)_existentTemporalFaceObjectIDs;
- (BOOL)_hasMutationForVerifiedType:(int *)a0;
- (id)_mutableFaceObjectIDsAndUUIDs;
- (id)_mutableInvalidMergeCandidateObjectIDsAndUUIDs;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (id)_mutableMergeCandidateObjectIDsAndUUIDs;
- (id)_mutableMergeCandidateWithConfidenceObjectIDsAndUUIDs;
- (id)_mutableRejectedFacesObjectIDsAndUUIDs;
- (id)_mutableRequiringFaceCropGenerationFacesUUIDs;
- (id)_mutableRequiringNewUnverifiedPersonFacesUUIDs;
- (id)_mutableTemporalFaceObjectIDsAndUUIDs;
- (id)_noLimitsPersonFetchOptions;
- (void)_prepareKeyFaceHelperIfNeeded;
- (BOOL)_removeObjects:(id)a0 fromArray:(id)a1;
- (void)_setGraphDedupePersons:(id)a0;
- (void)_setKeyFace:(id)a0 forCluster:(BOOL)a1 pickSource:(short)a2;
- (void)_setNominalMergeTargetUUID:(id)a0;
- (BOOL)_shouldPromotePerson:(id)a0 toVerifiedType:(int *)a1;
- (BOOL)_validateMergePerson:(id)a0 withPersonUUIDs:(id)a1 error:(id *)a2;
- (void)addFaces:(id)a0;
- (void)addInvalidMergeCandidatePersons:(id)a0;
- (void)addMergeCandidatePersons:(id)a0;
- (void)addMergeCandidateWithConfidencePersons:(id)a0;
- (void)addRejectedFaces:(id)a0;
- (void)addRejectedFaces:(id)a0 forCluster:(BOOL)a1;
- (void)addSearchEntityPersonRelationWithType:(short)a0 label:(id)a1 confidence:(double)a2 toPerson:(id)a3;
- (void)addTemporalFaces:(id)a0;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)mergePersons:(id)a0;
- (void)persistSuggestionForClient:(unsigned long long)a0;
- (id)personUUID;
- (void)rejectMergeCandidatePersons:(id)a0;
- (void)removeFaces:(id)a0;
- (void)removeMergeCandidatePersons:(id)a0;
- (void)removeMergeCandidateWithConfidencePersons:(id)a0;
- (void)removeRejectedFaces:(id)a0;
- (void)removeSearchEntityPersonRelationType:(short)a0 toPerson:(id)a1;
- (void)removeTemporalFaces:(id)a0;
- (void)setKeyFace:(id)a0;
- (void)setKeyFace:(id)a0 forCluster:(BOOL)a1;
- (void)setKeyFaceForUserPick:(id)a0;
- (void)setKeyFaceForUserPick:(id)a0 forCluster:(BOOL)a1;
- (void)setManualOrder:(unsigned long long)a0 verified:(BOOL)a1;
- (void)setPersonUUID:(id)a0;
- (void)setTemporalFaces:(id)a0;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (BOOL)validateMutationsToManagedObject:(id)a0 error:(id *)a1;

@end
