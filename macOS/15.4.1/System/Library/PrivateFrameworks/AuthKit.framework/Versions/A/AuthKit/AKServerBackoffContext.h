@class NSString, NSURL;

@interface AKServerBackoffContext : NSObject

@property (copy, nonatomic) NSString *proxiedAppBundleID;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) NSString *appServerName;
@property (copy, nonatomic) NSURL *url;

- (void).cxx_destruct;

@end
