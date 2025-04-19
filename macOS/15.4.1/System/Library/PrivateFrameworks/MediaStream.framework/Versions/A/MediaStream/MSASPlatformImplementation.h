@class NSString, ACAccountStore;

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)MSASIsAllowedToTransferMetadata;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)a0;
- (BOOL)MSASIsAllowedToUploadAssets;
- (id)personIDsEnabledForAlbumSharing;
- (int)MMCSConcurrentConnectionsCount;
- (id)MMCSUploadSocketOptionsForPersonID:(id)a0;
- (BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)a0;
- (BOOL)personIDEnabledForAlbumSharing:(id)a0;
- (id)_accountForPersonID:(id)a0;
- (id)albumSharingDaemon;
- (id)baseSharingURLForPersonID:(id)a0;
- (BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
- (void)logLevel:(int)a0 personID:(id)a1 albumGUID:(id)a2 format:(id)a3;
- (id)pathAlbumSharingDir;
- (BOOL)personIDUsesProductionPushEnvironment:(id)a0;
- (Class)pluginClass;
- (id)pushTokenForPersonID:(id)a0;
- (BOOL)shouldEnableNewFeatures;
- (BOOL)shouldLogAtLevel:(int)a0;

@end
