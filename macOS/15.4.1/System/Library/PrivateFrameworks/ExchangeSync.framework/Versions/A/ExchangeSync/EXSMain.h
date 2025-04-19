@class NSXPCListener, EXSSyncEngine, EXSMaintenanceActivity, EXSXPCServiceDelegate, EXSNotificationController;

@interface EXSMain : NSObject <EXSNotificationControllerDelegate>

@property (retain, nonatomic) EXSSyncEngine *syncEngine;
@property (retain, nonatomic) NSXPCListener *xpcListener;
@property (retain, nonatomic) EXSXPCServiceDelegate *delegate;
@property (retain, nonatomic) EXSNotificationController *notificationController;
@property (retain, nonatomic) EXSMaintenanceActivity *maintenanceActivity;

+ (id)log;

- (void).cxx_destruct;
- (void)startXPCListener;
- (void)shutdown;
- (void)startup;
- (void)notificationDeliveredForSyncNow;
- (void)registerXPCActivityAccountUpgrader;
- (void)registerXPCActivityFirstRun;
- (BOOL)shouldStayRunning;

@end
