@class DMFApplicationPolicyMonitor, NSString, STManagementState, DMFEmergencyModeMonitor, CNContactStore, CNDowntimeWhitelist, DMFCommunicationPolicyMonitor, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface STConversation : NSObject {
    NSMapTable *_contextByHandles;
    NSObject<OS_dispatch_queue> *_stateChangeQueue;
    NSObject *_didFetchInitialStateLock;
}

@property (readonly) CNContactStore *contactStore;
@property (readonly) CNDowntimeWhitelist *whitelist;
@property (retain) STManagementState *managementState;
@property (retain) DMFCommunicationPolicyMonitor *communicationPolicyMonitor;
@property (retain) DMFApplicationPolicyMonitor *thirdPartyApplicationPolicyMonitor;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) BOOL isThirdPartyBundleIdentifier;
@property (readonly, copy) NSString *processName;
@property long long generalScreenTimePolicy;
@property long long whileLimitedPolicy;
@property unsigned long long currentApplicationState;
@property long long currentThirdPartyApplicationState;
@property (retain) DMFEmergencyModeMonitor *emergencyModeMonitor;
@property BOOL emergencyModeEnabled;
@property BOOL didFetchInitialScreenTimePolicyState;
@property BOOL didFetchInitialApplicationState;
@property BOOL didFetchInitialEmergencyModeState;
@property BOOL didFetchInitialThirdPartyApplicationState;
@property (readonly) int policyNotifyToken;
@property (readonly) int emergencyModeNotifyToken;
@property (retain) STConversation *me;
@property (copy) id /* block */ conversationCompletionHandler;

+ (void)requestConversationWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_contactStoreDidChange;
- (id)_contactsByHandle:(id)a0 error:(id *)a1;
- (void)_currentApplicationStateDidChange;
- (void)_currentThirdPartyApplicationStateDidChange;
- (BOOL)_doesContainAtLeastOneContactInHandles:(id)a0 contactsByHandle:(id)a1;
- (void)_emergencyModeDidChange;
- (id)_filteredArrayForKnownHandlesInArray:(id)a0;
- (void)_populateAllowedContactsByHandlesForContactHandles:(id)a0 context:(id)a1;
- (void)_populateThirdPartyAllowedContactsByHandlesForContactHandles:(id)a0 context:(id)a1;
- (void)_screenTimePolicyDidChange;
- (BOOL)_shouldGeneralScreenTimeAllowHandles:(id)a0 context:(id)a1;
- (BOOL)_shouldWhileLimitedAllowHandles:(id)a0 context:(id)a1;
- (void)_stConversationCommonInitSetupObservationOfStateChanges;
- (void)_stConversationCommonInitWithBundleIdentifier:(id)a0 contactStore:(id)a1 completionHandler:(id /* block */)a2;
- (void)_stConversationCommonInitWithThirdPartyBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateAllContextsForNewWhileLimitedPolicyOrWhitelist;
- (void)_updateAllContextsUpdateGeneral:(BOOL)a0 updateLimited:(BOOL)a1 updateCurrentApplicationState:(BOOL)a2 updateAllowedByContactsHandle:(BOOL)a3 refreshContacts:(BOOL)a4 refreshWhitelist:(BOOL)a5 updateEmergencyMode:(BOOL)a6;
- (void)_updateAllThirdPartyContexts;
- (void)_updateContext:(id)a0 forHandles:(id)a1 updateGeneral:(BOOL)a2 updateLimited:(BOOL)a3 updateCurrentApplicationState:(BOOL)a4 updateAllowedByContactsHandle:(BOOL)a5 refreshContacts:(BOOL)a6 refreshWhitelist:(BOOL)a7 updateEmergencyMode:(BOOL)a8;
- (void)_updateThirdPartyContext:(id)a0 forHandles:(id)a1;
- (id)allowableByContactsHandles:(id)a0;
- (void)callCompletionHandlerIfNeededWithConversation:(id)a0 error:(id)a1;
- (void)callCompletionHandlerIfNeededWithThirdPartyConversation:(id)a0 error:(id)a1;
- (id)initSynchronouslyWithBundleIdentifier:(id)a0;
- (id)initSynchronouslyWithThirdPartyBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 contactStore:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 contactStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithThirdPartyBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
