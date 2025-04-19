@class EXSSyncEngine, NSBackgroundActivityScheduler;

@interface EXSMaintenanceActivity : NSObject

@property (retain, nonatomic) EXSSyncEngine *syncEngine;
@property (retain, nonatomic) NSBackgroundActivityScheduler *scheduler;

+ (id)log;

- (void).cxx_destruct;
- (void)invalidate;
- (id /* block */)_doMaintenanceActivity;
- (id)initWithSyncEngine:(id)a0;
- (void)scheduleMaintenanceActivity;

@end
