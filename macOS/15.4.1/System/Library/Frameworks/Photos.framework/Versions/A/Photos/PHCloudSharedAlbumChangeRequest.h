@class NSArray, NSDictionary, NSString, NSMutableArray, PHCloudSharedAlbum;

@interface PHCloudSharedAlbumChangeRequest : PHChangeRequest {
    BOOL _isPublic;
    BOOL _didSetIsPublic;
    BOOL _cloudMultipleContributorsEnabled;
    BOOL _didSetCloudMultipleContributorsEnabled;
    NSString *_cloudOwnerEmail;
    BOOL _didSetCloudOwnerEmail;
    BOOL _didSetInvitationState;
    long long _invitationStateToUpdate;
    BOOL _didSendPendingInvitations;
    BOOL _didReportInvitationAsSpam;
    BOOL _didPublish;
}

@property (retain, nonatomic) PHCloudSharedAlbum *cloudSharedAlbum;
@property (retain, nonatomic) NSMutableArray *invitationRecordGUIDsToRemove;
@property (retain, nonatomic) NSMutableArray *pendingInvitationRecordGUIDs;
@property (retain, nonatomic) NSMutableArray *invitationsToAdd;
@property (retain, nonatomic) NSMutableArray *invitationRecordGUIDsToUpdate;
@property (retain, nonatomic) NSArray *assetsToPublish;
@property (retain, nonatomic) NSDictionary *assetsSharingInfos;
@property (retain, nonatomic) NSString *commentText;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL isOwned;
@property (retain, nonatomic) NSString *cloudOwnerFirstName;
@property (retain, nonatomic) NSString *cloudOwnerLastName;
@property (retain, nonatomic) NSString *cloudOwnerFullName;
@property (retain, nonatomic) NSString *cloudOwnerEmail;
@property (nonatomic) BOOL isPublic;
@property (nonatomic) BOOL cloudPublicURLEnabled;
@property (nonatomic) BOOL cloudPublicURLEnabledLocal;
@property (nonatomic) BOOL cloudMultipleContributorsEnabled;
@property (nonatomic) BOOL cloudMultipleContributorsEnabledLocal;
@property (nonatomic) BOOL cloudNotificationsEnabled;
@property (nonatomic) long long invitationState;

+ (id)changeRequestForCloudSharedAlbum:(id)a0;
+ (id)creationRequestForCloudSharedAlbumWithTitle:(id)a0;

- (void).cxx_destruct;
- (void)publish;
- (void)acceptInvitation;
- (void)declineInvitation;
- (void)resendPendingInvitationRecords:(id)a0;
- (void)addInvitationRecordWithFirstName:(id)a0 lastName:(id)a1 fullName:(id)a2 emails:(id)a3 phones:(id)a4;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)managedEntityName;
- (id)placeholderForCreatedCloudSharedAlbum;
- (void)publishBatchOfOriginalAssets:(id)a0 withBatchCommentText:(id)a1 creationOptionsPerAsset:(id)a2;
- (void)removeCloudSharedAlbumInvitationRecords:(id)a0;
- (void)reportInvitationAsSpam;
- (void)sendPendingInvitations;
- (void)setDidPublish:(BOOL)a0;
- (void)setDidReportInvitationAsSpam:(BOOL)a0;
- (void)setDidSendPendingInvitations:(BOOL)a0;
- (void)setInvitationStateLocalForInvitationRecords:(id)a0 invitationStateLocal:(id)a1;
- (void)stopSharing;

@end
