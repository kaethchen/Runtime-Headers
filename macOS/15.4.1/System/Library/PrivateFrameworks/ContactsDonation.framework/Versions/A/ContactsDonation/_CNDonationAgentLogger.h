@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)acceptingDonations:(id)a0;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)agentDidStart;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)agentWillStart;
- (void)agentWillStop;
- (void)beginRestorePersistedState;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void)couldNotRenewBecauseLoadingError:(id)a0;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)denyingRequestFromProcess:(int)a0;
- (void)didDiscoverExtension:(id)a0;
- (void)didDiscoverExtensions;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)didListRejections;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)didRemoveAllRejections;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)donationServiceDidStart;
- (void)donationServiceWillStart;
- (void)donationServiceWillStop;
- (void)endRestorePersistedState;
- (void)featureDidDisable;
- (void)featureDidEnable;
- (void)featureNotEnabled:(SEL)a0;
- (void)featureWillDisable;
- (void)featureWillEnable;
- (void)foundUnhashableValue:(id)a0;
- (void)maintenanceServiceDidStart;
- (void)maintenanceServiceWillStart;
- (void)maintenanceServiceWillStop;
- (void)preExpiredDonations:(id)a0;
- (void)willDiscoverExtensions;
- (void)willListRejections;
- (void)willLoadExtensionVersions;
- (void)willRejectClusterIdentifier:(id)a0;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)willRemoveAllRejections;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)willSaveExtensionVersions;

@end
