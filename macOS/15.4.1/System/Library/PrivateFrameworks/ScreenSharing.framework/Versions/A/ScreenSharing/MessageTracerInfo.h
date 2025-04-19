@class NSString, NSDate;

@interface MessageTracerInfo : NSObject

@property (retain) NSDate *sessionStartTime;
@property (retain) NSString *serverVersion;

+ (id)getAppBundleID;
+ (void)logAddressResolveFailure:(BOOL)a0 withFailureReason:(id)a1;
+ (void)logNetworkAddressType:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)logAuthenticationFinished:(BOOL)a0 withAuthResult:(int)a1;
- (void)logAuthenticationType:(id)a0;
- (void)logConfigurationString:(id)a0;
- (void)logConnectionFailure:(BOOL)a0 withFailureReason:(id)a1;
- (void)logKerberosFailure:(BOOL)a0 withFailureReason:(id)a1;
- (void)logServerVersion:(id)a0;
- (void)logSessionEndedToMessageTracer;

@end
