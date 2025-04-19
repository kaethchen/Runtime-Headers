@class NSXPCConnection;

@interface PowerModeConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (BOOL)updateAllowOnCharger:(id)a0 withState:(BOOL)a1;
- (BOOL)disablePowerMode:(id)a0;
- (BOOL)enablePowerMode:(id)a0;
- (BOOL)updateEntryDelay:(id)a0 withDelay:(double)a1;
- (BOOL)updateMaxEngagementDuration:(id)a0 withDuration:(double)a1;
- (BOOL)updatePowerMode:(id)a0 withState:(BOOL)a1;

@end
