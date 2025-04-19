@interface SKIPhoneInvocation : NSObject

+ (id)readHomeAnnouncementRequestFromApp:(id)a0;
+ (id)startPhoneCallRequestFromApp:(id)a0;
+ (id)announceGroupFaceTimeRequestForAnnounceDirectInvocationPayload:(id)a0;
+ (id)announceHomeAnnouncementRequestFromApp:(id)a0 withAnnouncementIdentifier:(id)a1 withUserNotificationType:(long long)a2 synchronousBurstIndex:(id)a3;
+ (id)announceIncomingCallNotificationRequest:(id)a0;
+ (id)announceIncomingCallerRequestForCallID:(id)a0 callProviderIdentifier:(id)a1 callProviderBundleId:(id)a2 callerContactIdentifiers:(id)a3 handle:(id)a4 isVideo:(BOOL)a5 isCallerIDBlocked:(BOOL)a6 isBobbleCapableAnnouncement:(BOOL)a7;
+ (id)announceIncomingCallerRequestForCallUUID:(id)a0 callProviderIdentifier:(id)a1 callProviderBundleId:(id)a2 callerContactIdentifiers:(id)a3 handle:(id)a4 isVideo:(BOOL)a5 isCallerIDBlocked:(BOOL)a6;
+ (id)announcePayloadFromUserData:(id)a0;
+ (id)announceVoicemailRequestForAnnounceDirectInvocationPayload:(id)a0;

@end
