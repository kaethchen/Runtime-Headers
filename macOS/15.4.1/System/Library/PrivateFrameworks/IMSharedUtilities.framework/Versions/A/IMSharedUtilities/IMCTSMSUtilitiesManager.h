@interface IMCTSMSUtilitiesManager : NSObject

@property (nonatomic) int mmsEnabledToken;
@property (nonatomic) int rcsEnabledToken;

+ (id)sharedManager;

- (id)init;
- (BOOL)mmsEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (id)myCTPhoneNumber;
- (id)carrierBundleValueForKeyHierarchy:(id)a0 phoneNumber:(id)a1 simID:(id)a2;
- (id)carrierNameForPhoneNumber:(id)a0;
- (id)countryCodeForPhoneNumber:(id)a0 simID:(id)a1;
- (id)countryCodeForSimSlot:(long long)a0;
- (unsigned long long)iMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
- (void)iMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
- (unsigned long long)iMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
- (BOOL)isEagerUploadEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)messagesFilteringSettingForPreferedSubscription;
- (BOOL)mmsDefaultEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)mmsEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)a0 simID:(id)a1;
- (id)mmsEmailAddressToMatchForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)mmsGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)mmsGroupTextReplicationSupportedForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)mmsGroupTextReplicationSupportsSMILContentLocationForPhoneNumber:(id)a0 simID:(id)a1;
- (int)mmsMaxImageDimensionForPhoneNumber:(id)a0 simID:(id)a1;
- (int)mmsMaxRecipientsForPhoneNumber:(id)a0 simID:(id)a1;
- (double)mmsMaximumAudioDurationForPhoneNumber:(id)a0 simID:(id)a1;
- (double)mmsMaximumDurationWithPreset:(id)a0 phoneNumber:(id)a1 simID:(id)a2;
- (int)mmsMaximumMessageByteCountForPhoneNumber:(id)a0 simID:(id)a1;
- (int)mmsMaximumSlideCountForPhoneNumber:(id)a0 simID:(id)a1;
- (double)mmsMaximumVideoDurationForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)mmsRestrictedModeEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)mmsRestrictedModeEnabledForPhoneNumber:(id)a0 simID:(id)a1 reset:(BOOL)a2;
- (BOOL)mmsSupportedAndConfiguredForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)mmsSupportsH264VideoForPhoneNumber:(id)a0 simID:(id)a1;
- (id)phoneNumbersEnabledForMultipleSubscriptionDevice;
- (unsigned long long)readAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)readDisablePreviewTranscodingQualityOnWRMCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)readDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)readEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)readMMSUserOverrideForPhoneNumber:(id)a0 simID:(id)a1;
- (void)registerServiceCapabilityNotifications;
- (BOOL)shouldShowMMSEmailAddress:(id)a0 simID:(id)a1;
- (BOOL)shouldUploadToMMCS:(id)a0;
- (BOOL)smsAllowCaseSensitiveSenderIDForPhoneNumber:(id)a0;
- (void)synchronizeMMSCapabilityToWatch:(BOOL)a0;
- (void)synchronizePreferredSubscriptionMMSCapabilityToWatch;
- (id)uniqueIdentifierForPhoneNumber:(id)a0 simID:(id)a1;

@end
