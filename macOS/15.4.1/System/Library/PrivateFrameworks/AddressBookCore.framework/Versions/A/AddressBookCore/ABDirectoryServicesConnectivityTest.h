@class NSObject;
@protocol OS_os_log;

@interface ABDirectoryServicesConnectivityTest : NSObject

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

+ (BOOL)isDirectoryServicesConfigured;

- (void)beginCheckingIsDirectoryServicesConfiguredWithDelay:(double)a0 completionHandler:(id /* block */)a1;

@end
