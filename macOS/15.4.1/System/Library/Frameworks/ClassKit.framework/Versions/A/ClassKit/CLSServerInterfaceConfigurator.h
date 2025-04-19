@class NSSet, NSXPCInterface;

@interface CLSServerInterfaceConfigurator : NSObject {
    NSXPCInterface *_interface;
    NSSet *_contextsSet;
    NSSet *_arraySet;
}

- (id)init;
- (void).cxx_destruct;
- (void)configureFeatureAvailabilityAPI;
- (void)configureAuthorizationStatusAPI;
- (void)configureAdminRequestAPI;
- (void)configureAppsAPI;
- (void)configureAssetSupportAPI;
- (void)configureClassAPI;
- (void)configureCollaborationStateAPI;
- (void)configureCollectionsAPI;
- (void)configureContextAPI;
- (void)configureDashboardAppAPI;
- (void)configureDataObserverAPI;
- (void)configureHandoutAPI;
- (void)configureInsightEventsAPI;
- (void)configureProgressReportingAPI;
- (void)configureQueryAPI;
- (void)configureRelayRequestAPI;
- (void)configureRosterQueryAPI;
- (void)configureSaveAPI;
- (id)configureServerInterface;
- (void)configureStudentActivityAPI;
- (void)configureSurveyAnswerAPI;
- (void)configureUserNotificationAPI;
- (void)configureUtilityServerAPI;

@end
