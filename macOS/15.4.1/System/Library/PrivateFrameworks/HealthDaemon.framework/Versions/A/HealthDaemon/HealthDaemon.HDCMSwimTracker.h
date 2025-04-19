@interface HealthDaemon.HDCMSwimTracker : NSObject <HealthDaemon.HDCMSwimTrackerProxy>

- (id)init;
- (void)stopUpdates;
- (void)startUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;
- (void)querySwimUpdatesFromRecord:(id)a0 handler:(id /* block */)a1;

@end
