@class AudioAnalyticsReporter, NSMutableDictionary, NSDictionary, NSDate, CAReportingPerformanceObject;

@interface CAReporter : NSObject

@property (retain, nonatomic) AudioAnalyticsReporter *swiftReporter;
@property (retain) NSMutableDictionary *internalConfiguration;
@property (retain) NSDate *startDate;
@property (nonatomic) unsigned short serviceType;
@property BOOL started;
@property BOOL removedByClient;
@property BOOL connected;
@property (retain) CAReportingPerformanceObject *perfObject;
@property (readonly) unsigned long long signpostID;
@property (readonly) long long reporterID;
@property (retain, nonatomic) NSDictionary *configuration;

+ (void)sendSingleMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithNewReporterID;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;
- (id)initWithReporterID:(long long)a0 serviceType:(unsigned short)a1;
- (void)cacheServiceType:(unsigned short)a0;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;
- (void)requestMessageForCategory:(unsigned int)a0 type:(unsigned short)a1 callback:(id /* block */)a2;
- (void)updateWithReporterID:(long long)a0;

@end
