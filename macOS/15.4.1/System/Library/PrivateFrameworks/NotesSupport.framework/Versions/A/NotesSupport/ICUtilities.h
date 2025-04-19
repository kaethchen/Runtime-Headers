@interface ICUtilities : NSObject

@property (class, readonly, nonatomic) BOOL isInternalInstall;
@property (class, readonly, nonatomic) BOOL isInternetReachable;
@property (class, readonly, nonatomic) BOOL isSeedInstall;
@property (class, readonly, nonatomic) BOOL isSeedOrInternalInstall;

@end
