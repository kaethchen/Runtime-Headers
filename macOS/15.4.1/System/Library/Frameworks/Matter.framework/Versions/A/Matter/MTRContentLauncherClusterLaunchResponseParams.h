@class NSNumber, NSString;

@interface MTRContentLauncherClusterLaunchResponseParams : MTRContentLauncherClusterLauncherResponseParams

@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

@end
