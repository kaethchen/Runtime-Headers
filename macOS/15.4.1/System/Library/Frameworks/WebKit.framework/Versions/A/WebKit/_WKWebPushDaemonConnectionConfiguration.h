@class NSString;

@interface _WKWebPushDaemonConnectionConfiguration : NSObject

@property (copy, nonatomic) NSString *machServiceName;
@property (copy, nonatomic) NSString *partition;
@property (nonatomic) struct { unsigned int val[8]; } hostApplicationAuditToken;
@property (copy, nonatomic) NSString *bundleIdentifierOverrideForTesting;

- (id)init;

@end
