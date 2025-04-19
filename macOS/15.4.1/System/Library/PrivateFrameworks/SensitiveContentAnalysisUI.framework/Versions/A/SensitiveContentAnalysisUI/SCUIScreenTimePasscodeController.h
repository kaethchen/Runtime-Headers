@class NSError, NSViewController;

@interface SCUIScreenTimePasscodeController : NSObject

@property (class, nonatomic, readonly) NSError *wrongPasscodeError;
@property (class, nonatomic, readonly) NSError *cancellationError;
@property (class, nonatomic, readonly) NSError *screenTimeUnavailable;

+ (void)_checkScreenTimePasscodeFromViewController:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_isScreenTimePasscodeSet:(id *)a0;
+ (void)askUserForScreenTimePasscodeFrom:(NSViewController *)a0 interventionType:(long long)a1 completionHandler:(void (^)(NSError *))a2;
+ (BOOL)willScreenTimePasscodeBeRequiredFor:(long long)a0;

@end
