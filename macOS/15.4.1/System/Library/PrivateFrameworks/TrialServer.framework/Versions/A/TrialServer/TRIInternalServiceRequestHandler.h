@class TRIXPCServerContextPromise;
@protocol TRITrialInternalEntitled;

@interface TRIInternalServiceRequestHandler : NSObject <TRIXPCInternalServiceProtocol> {
    TRIXPCServerContextPromise *_promise;
    id<TRITrialInternalEntitled> _entitlementWitness;
    struct { unsigned int val[8]; } _auditToken;
}

- (void).cxx_destruct;
- (void)activeBMLTInformationWithPrivacyFilterPolicy:(unsigned char)a0 completion:(id /* block */)a1;
- (void)activeExperimentInformationWithPrivacyFilterPolicy:(unsigned char)a0 completion:(id /* block */)a1;
- (void)activeRolloutInformationWithPrivacyFilterPolicy:(unsigned char)a0 completion:(id /* block */)a1;
- (void)deregisterNamespaceWithNamespaceName:(id)a0 teamId:(id)a1 completion:(id /* block */)a2;
- (void)dynamicNamespaceRecordsWithCompletion:(id /* block */)a0;
- (void)experimentIdsWithActiveStateAndNamespaceName:(id)a0 completion:(id /* block */)a1;
- (void)experimentNotificationsWithExperimentId:(id)a0 cloudKitContainer:(int)a1 teamId:(id)a2 completion:(id /* block */)a3;
- (void)immediatelySchedulePostUpgradeActivityWithCompletion:(id /* block */)a0;
- (void)lastFetchDateForContainer:(int)a0 teamId:(id)a1 completion:(id /* block */)a2;
- (void)logSystemCovariates;
- (void)registerNamespaceWithNamespaceName:(id)a0 compatibilityVersion:(unsigned int)a1 defaultsFileURL:(id)a2 teamId:(id)a3 appContainerId:(id)a4 appContainerType:(long long)a5 cloudKitContainerId:(int)a6 completion:(id /* block */)a7;
- (void)removeUnusedChannelsWithCompletion:(id /* block */)a0;
- (void)resumeSQLiteCKDatabaseQueueWithCompletion:(id /* block */)a0;
- (void)rolloutNotificationWithLatestDeploymentForRolloutId:(id)a0 cloudKitContainer:(int)a1 teamId:(id)a2 completion:(id /* block */)a3;
- (void)setFailureInjectionDelegate:(id)a0;
- (void)setLastFetchDate:(id)a0 forContainer:(int)a1 teamId:(id)a2 completion:(id /* block */)a3;
- (void)setSubscription:(id)a0 namespaceName:(id)a1 completion:(id /* block */)a2;
- (void)startDownloadNamespaceWithName:(id)a0 teamId:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)submitTask:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)subscriptionForNamespaceName:(id)a0 completion:(id /* block */)a1;
- (void)suspendSQLiteCKDatabaseQueueWithCompletion:(id /* block */)a0;
- (void)taskRecordsWithCompletion:(id /* block */)a0;
- (id)_activeExperimentFactorLevelsForNamespaceName:(id)a0;
- (void)_experimentRecordsWithDeploymentEnvironments:(id)a0 privacyFilterPolicy:(unsigned char)a1 serverContext:(id)a2 completion:(id /* block */)a3;
- (id)initWithPromise:(id)a0 auditToken:(struct { unsigned int x0[8]; })a1 entitlementWitness:(id)a2;

@end
