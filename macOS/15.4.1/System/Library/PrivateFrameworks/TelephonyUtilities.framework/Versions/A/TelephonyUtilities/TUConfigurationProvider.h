@class CoreTelephonyClient, TUUserConfiguration;
@protocol TUCarrierBundleControllerProtocol, TUConfigurationProviderNotifier, TUConfigurationProviderDelegate;

@interface TUConfigurationProvider : NSObject

@property (readonly, nonatomic) TUUserConfiguration *userConfiguration;
@property (readonly, nonatomic) id<TUConfigurationProviderNotifier> configurationProviderNotifier;
@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;
@property (readonly, nonatomic) int token;
@property (readonly, nonatomic) id<TUCarrierBundleControllerProtocol> carrierBundleController;
@property (weak, nonatomic) id<TUConfigurationProviderDelegate> delegate;
@property (readonly, nonatomic, getter=isSIMAvailable) BOOL simAvailable;
@property (readonly, nonatomic, getter=isIncomingCallsAvailableForPhone) BOOL incomingCallsAvailableForPhone;
@property (readonly, nonatomic, getter=isCallAnnouncementAvailableForPhone) BOOL callAnnouncementAvailableForPhone;
@property (readonly, nonatomic, getter=isMyNumberAvailable) BOOL myNumberAvailable;
@property (readonly, nonatomic, getter=isCallReportingAvailable) BOOL callReportingAvailable;
@property (readonly, nonatomic, getter=isShareNameAndPhotosAvailable) BOOL shareNameAndPhotosAvailable;
@property (readonly, nonatomic, getter=isWiFiCallingAvailable) BOOL wiFiCallingAvailable;
@property (readonly, nonatomic, getter=isRelayPrimaryAvailable) BOOL relayPrimaryAvailable;
@property (readonly, nonatomic, getter=isRelaySecondaryAvailable) BOOL relaySecondaryAvailable;
@property (readonly, nonatomic, getter=isRespondwithTextAvailable) BOOL respondwithTextAvailable;
@property (readonly, nonatomic, getter=isCallForwardingAvailable) BOOL callForwardingAvailable;
@property (readonly, nonatomic, getter=isCallWaitingAvailable) BOOL callWaitingAvailable;
@property (readonly, nonatomic, getter=isShowMyCallerIDAvailable) BOOL showMyCallerIDAvailable;
@property (readonly, nonatomic, getter=isCallScreeningAvailable) BOOL callScreeningAvailable;
@property (readonly, nonatomic, getter=isBrandedCallingAvailable) BOOL brandedCallingAvailable;
@property (readonly, nonatomic, getter=isBusinessConnectCallingAvailable) BOOL businessConnectCallingAvailable;
@property (readonly, nonatomic, getter=isLiveLookupAvailable) BOOL liveLookupAvailable;
@property (readonly, nonatomic, getter=isCallBlockingAndIdentificationAvailable) BOOL callBlockingAndIdentificationAvailable;
@property (readonly, nonatomic, getter=isBlockedContactsAvailable) BOOL blockedContactsAvailable;
@property (readonly, nonatomic, getter=isILClassificationAvailable) BOOL iLClassificationAvailable;
@property (readonly, nonatomic, getter=isDialAssistAvailable) BOOL dialAssistAvailable;
@property (readonly, nonatomic, getter=isCallIdentificationAppsAvailable) BOOL callIdentificationAppsAvailable;
@property (readonly, nonatomic, getter=isSilenceJunkCallingAvailable) BOOL silenceJunkCallingAvailable;
@property (nonatomic, getter=isCallScreeningEnabled, setter=setCallScreeningEnabled:) BOOL callScreeningEnabled;
@property (nonatomic, getter=isSilenceUnknownCallersEnabledForPhone, setter=setSilenceUnknownCallersEnabledForPhone:) BOOL silenceUnknownCallersEnabledForPhone;
@property (nonatomic, getter=isSilenceUnknownCallersEnabledForFaceTime, setter=setSilenceUnknownCallersEnabledForFaceTime:) BOOL silenceUnknownCallersEnabledForFaceTime;
@property (nonatomic, getter=isSilenceJunkCallingEnabled, setter=setSilenceJunkCallingEnabled:) BOOL silenceJunkCallingEnabled;
@property (nonatomic, getter=isBusinessConnectCallingEnabled, setter=setBusinessConnectCallingEnabled:) BOOL businessConnectCallingEnabled;
@property (readonly, nonatomic, getter=isFaceTimeEnabledInSettings) BOOL faceTimeEnabledInSettings;
@property (readonly, nonatomic, getter=isIncomingCallsAvailableForFaceTime) BOOL incomingCallsAvailableForFaceTime;
@property (readonly, nonatomic, getter=isCallAnnouncementAvailableForFaceTime) BOOL callAnnouncementAvailableForFaceTime;
@property (readonly, nonatomic, getter=isSharePlayAvailable) BOOL sharePlayAvailable;
@property (readonly, nonatomic, getter=isAutomaticProminenceAvailable) BOOL automaticProminenceAvailable;
@property (readonly, nonatomic, getter=isLivePhotosAvailable) BOOL livePhotosAvailable;
@property (readonly, nonatomic, getter=isSIMPINAvailable) BOOL simPINAvailable;
@property (readonly, nonatomic, getter=isNetworkSelectionAvailable) BOOL networkSelectionAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNotifier:(id)a0;
- (BOOL)isBrandedCallingEnabled:(BOOL)a0;
- (BOOL)isSystemCapabilityAvailableForName:(id)a0;
- (id)objectForKeyHierarchy:(id)a0 subscriptionContext:(id)a1 error:(id *)a2;
- (void)postConfigurationChangedNotification;
- (void)setBrandedCallingEnabled:(BOOL)a0 primary:(BOOL)a1;
- (id)stringForKeyHierarchy:(id)a0 subscriptionContext:(id)a1 error:(id *)a2;
- (BOOL)supportsBrandedCallingForSubscriptionContext:(id)a0;
- (BOOL)supportsBusinessConnectCallingForSubscriptionContext:(id)a0;
- (BOOL)supportsCallBlockingForSubscriptionContext:(id)a0;
- (BOOL)supportsDialAssistForSubscriptionContext:(id)a0;
- (BOOL)supportsSystemCapabilityWithName:(id)a0 subscriptionContext:(id)a1;
- (id)systemCapabilitiesForSubscriptionContext:(id)a0;

@end
