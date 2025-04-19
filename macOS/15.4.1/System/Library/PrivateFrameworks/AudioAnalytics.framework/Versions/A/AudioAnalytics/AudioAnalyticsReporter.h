@class NSDictionary;

@interface AudioAnalyticsReporter : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ reporterID;
@property (nonatomic, readonly) unsigned short serviceType;
@property (nonatomic, copy) NSDictionary *configuration;

+ (void)sendSessionlessMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;

- (void)dealloc;
- (id)init;
- (void)start;
- (void)stop;
- (void)setServiceType:(unsigned short)a0;
- (id)initWithNewReporterID;
- (void)sendMessage:(id)a0 category:(unsigned int)a1 type:(unsigned short)a2;
- (id)initWithReporterID:(long long)a0;
- (id)initWithSessionID:(unsigned int)a0 serviceType:(unsigned short)a1;
- (void)requestMessageForCategory:(unsigned int)a0 type:(unsigned short)a1 callback:(id /* block */)a2;

@end
