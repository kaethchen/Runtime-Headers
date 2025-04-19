@class NSString;

@interface HKRegulatoryDomainManager : NSObject <HKRegulatoryDomainProvider>

@property (class, copy, nonatomic) NSString *overrideISOCountryCode;

+ (BOOL)isOverridePresent;
+ (id)registerForUpdatesWithBlock:(id /* block */)a0 queue:(id)a1;
+ (BOOL)unregisterForUpdatesWithToken:(id)a0;

- (id)currentCountryCode;
- (id)currentEstimate;
- (void)fetchMobileCountryCodeFromCellularWithCompletion:(id /* block */)a0;

@end
