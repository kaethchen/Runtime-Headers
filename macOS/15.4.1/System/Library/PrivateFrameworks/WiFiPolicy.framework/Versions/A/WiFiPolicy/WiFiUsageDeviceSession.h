@interface WiFiUsageDeviceSession : WiFiUsageSession {
    BOOL _firstDisplayOn;
}

- (id)metricName;
- (void)displayStateDidChange:(BOOL)a0;
- (id)initWithInterfaceName:(id)a0 andCapabilities:(id)a1;
- (void)linkQualityDidChange:(id)a0;
- (void)systemWakeStateDidChange:(BOOL)a0 wokenByWiFi:(BOOL)a1;

@end
