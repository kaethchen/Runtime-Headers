@interface UserNotificationsCore.NotificationGroupService : _TtCs12_SwiftObject <UserNotificationsCore.SummaryServiceDelegate> {
    void /* unknown type, empty encoding */ migrationScheduler;
    void /* unknown type, empty encoding */ persistenceManager;
    void /* unknown type, empty encoding */ summaryService;
    void /* unknown type, empty encoding */ settingsManager;
    void /* unknown type, empty encoding */ callOutQueue;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ queue_observers;
    void /* unknown type, empty encoding */ queue_list;
    void /* unknown type, empty encoding */ queue_throttler;
    void /* unknown type, empty encoding */ queue_resumeTimer;
    void /* unknown type, empty encoding */ queue_holdingOffEmissions;
}

- (void)summaryServiceDidReceiveGroupSummaries:(id)a0;

@end
