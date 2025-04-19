@interface AudioAnalytics.AudioAnalyticsTestReporter : AudioAnalyticsReporter

@property (nonatomic, readonly) unsigned short serviceType;

- (void)setServiceType:(unsigned short)a0;
- (id)initWithNewReporterID;
- (id)initWithReporterID:(long long)a0;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;

@end
