@class NSString;

@interface PLAssetsdNotificationService : PLAbstractLibraryServicesManagerService <PLAssetsdNotificationServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)noteGoingToExpireCMMsAlertWithCMMUUIDs:(id)a0 thumbnailImageData:(id)a1 notificationTitle:(id)a2 notificationSubtitle:(id)a3;
- (void)noteInterestingMemoryAlertViewedWithUUID:(id)a0;
- (void)noteInterestingMemoryAlertWithMemoryUUID:(id)a0 notificationDeliveryDate:(id)a1;
- (void)notePhotosChallengeNewQuestionsWithNotificationDeliveryDate:(id)a0;
- (void)notePhotosChallengeSubmissionWithNotificationDeliveryDate:(id)a0;
- (void)noteReadyToViewMomentShareWithUUID:(id)a0;
- (void)noteSharedLibrarySuggestionsWithNotificationDeliveryDate:(id)a0;
- (void)reportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0;
- (void)respondToPhotoStreamInvitationWithAlbumCloudGUID:(id)a0 acceptInvitation:(BOOL)a1;
- (void)userViewedNotificationWithAlbumCloudGUID:(id)a0;

@end
