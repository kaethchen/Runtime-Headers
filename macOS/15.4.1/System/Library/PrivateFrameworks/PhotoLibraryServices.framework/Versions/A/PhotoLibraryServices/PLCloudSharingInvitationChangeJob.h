@class NSArray, NSString, NSDictionary;

@interface PLCloudSharingInvitationChangeJob : PLCloudSharingJob

@property (retain, nonatomic) NSArray *MSASSharingRelationships;
@property (nonatomic) long long relationshipChangeType;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSString *resendInvitationGUID;
@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;

+ (void)resendPendingInvitationWithGUID:(id)a0 albumGUID:(id)a1;
+ (void)saveServerStateLocallyForSharingACLRelationships:(id)a0 changeType:(long long)a1 info:(id)a2;
+ (void)saveServerStateLocallyForSharingInvitationRelationships:(id)a0 changeType:(long long)a1 info:(id)a2;
+ (void)sendServerPendingInvitationsForAlbumWithGUID:(id)a0;

- (id)description;
- (void)run;
- (void).cxx_destruct;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)a0;
- (void)executeSaveServerStateLocallyForSharingACLRelationships;
- (void)executeSaveServerStateLocallyForSharingInvitationRelationships;
- (void)executeSendServerPendingInvitationsForAlbumWithGUID;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;

@end
