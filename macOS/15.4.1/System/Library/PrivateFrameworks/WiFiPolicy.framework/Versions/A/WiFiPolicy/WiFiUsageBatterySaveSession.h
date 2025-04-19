@interface WiFiUsageBatterySaveSession : WiFiUsageSession {
    BOOL _batterySaveMode;
}

- (id)metricName;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)updateWowState:(BOOL)a0 lpasState:(BOOL)a1 lowPowerState:(BOOL)a2 batterySaverState:(BOOL)a3;

@end
