@interface IMCTSMSUtilities : NSObject

+ (id)IMCountryCodeForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSEagerUploadDisabledInCarrierBundleForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSGroupTextReplicationSupportedForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaxImageDimensionForPhoneNumber:(id)a0 simID:(id)a1;
+ (double)IMMMSMaximumAudioDurationForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaximumSlideCountForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSRestrictedModeEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSSupportsH264VideoForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMReadDisablePreviewTranscodingQualityOnWRMCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMReadEnablePreviewTranscodingQualityCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (void)IMSynchronizeMMSCapabilityToWatch:(BOOL)a0;
+ (id)IMUniqueIdentifierForPhoneNumber:(id)a0 simID:(id)a1;
+ (void)IMiMessageMaxTransferFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
+ (BOOL)SMSAllowCaseSensitiveSenderIDForPhoneNumber:(id)a0;
+ (id)IMCountryCodeForSimSlot:(long long)a0;
+ (BOOL)IMIsEagerUploadEnabledForPhoneNumber:(id)a0 simID:(id)a1;
+ (id)IMMMSEmailAddressToMatchForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSGroupTextOnlyMessagesSendAsMMSForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSGroupTextReplicationSupportsSMILContentLocationForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaxRecipientsForPhoneNumber:(id)a0 simID:(id)a1;
+ (int)IMMMSMaximumMessageByteCountForPhoneNumber:(id)a0 simID:(id)a1;
+ (double)IMMMSMaximumVideoDurationForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMMSSupportedAndConfiguredForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMMessagesFilteringSettingForPreferedSubscription;
+ (id)IMPhoneNumbersEnabledForMultipleSubscriptionDevice;
+ (unsigned long long)IMReadAttachmentPreviewTranscodingQualitySizeCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMReadDisablePreviewTranscodingQualityOnWiFiCarrierValueForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMReadMMSUserOverrideForPhoneNumber:(id)a0 simID:(id)a1;
+ (BOOL)IMShouldShowMMSEmailAddress:(id)a0 simID:(id)a1;
+ (void)IMSynchronizePreferredSubscriptionMMSCapabilityToWatch;
+ (unsigned long long)IMiMessageMaxTransferAudioFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
+ (unsigned long long)IMiMessageMaxTransferVideoFileSizeForWifiForPhoneNumber:(unsigned long long *)a0 cellSize:(unsigned long long *)a1 serverConfigurationBag:(id)a2 phoneNumber:(id)a3 simID:(id)a4;
+ (id)myCTPhoneNumber;
+ (id)carrierBundleValueForKeyHierarchy:(id)a0 phoneNumber:(id)a1 simID:(id)a2;
+ (id)carrierNameForPhoneNumber:(id)a0;
+ (BOOL)shouldUploadToMMCS:(id)a0;

@end
