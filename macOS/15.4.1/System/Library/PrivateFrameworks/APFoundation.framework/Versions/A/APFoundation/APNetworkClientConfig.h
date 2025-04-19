@interface APNetworkClientConfig : NSObject

@property (nonatomic) BOOL useFixedHttpSessionManager;
@property (nonatomic) long long httpMaximumConnectionsPerHost;
@property (nonatomic) long long httpMaximumConnectionsPerHostTempSession;
@property (nonatomic) double lookBackWindow;

@end
