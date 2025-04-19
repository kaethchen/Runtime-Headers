@interface PLAssetsdNotificationClient : PLAssetsdBaseClient

- (void)asyncNotifyReportAsJunkPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0;
- (void)asyncNotifyResponseToPhotoStreamInvitationForAlbumWithCloudGUID:(id)a0 acceptInvitation:(BOOL)a1;
- (void)asyncNotifyInterestingMemoryNotificationForColletionID:(id)a0 notificationDeliveryDate:(id)a1;
- (void)asyncNotifyPhotosChallengeNewQuestionsWithNotificationDeliveryDate:(id)a0;
- (void)asyncNotifyPhotosChallengeSubmissionWithNotificationDeliveryDate:(id)a0;
- (void)asyncNotifySharedLibrarySuggestionsWithNotificationDeliveryDate:(id)a0;
- (void)asyncNotifyInterestingMemoryNotificationViewedForColletionID:(id)a0;
- (void)asyncNotifyExpiringMomentShareWithUUIDs:(id)a0 thumbnailImageData:(id)a1 notificationTitle:(id)a2 notificationSubtitle:(id)a3;
- (void)asyncNotifyReadyToViewMomentShareWithUUID:(id)a0;
- (void)asyncNotifyUserViewedNotificationWithAlbumCloudGUID:(id)a0;

@end
