@class NSError, NSString;

@interface GMAvailabilityWrapper : NSObject

+ (long long)currentWithUseCaseIdentifiers:(id)a0;
+ (long long)currentWithUseCaseIdentifiers:(id)a0 language:(id)a1;
+ (BOOL)shouldBeShownInSettingsReturningAvailabilityStatus:(long long *)a0;
+ (void)getShouldBlockAppleIntelligenceAssetsWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (void)getShouldNotDownloadOrServeAppleIntelligenceAssetsWithCompletionHandler:(void (^)(BOOL, NSError *))a0;
+ (void)getWaitlistWithUseCaseIdentifier:(NSString *)a0 completionHandler:(void (^)(long long, NSError *))a1;
+ (BOOL)isOkayToHaveAsset;
+ (BOOL)shouldBeShownInSetupAssistantReturningAvailabilityStatus:(long long *)a0;
+ (void)updateAvailabilityWithCompletion:(void (^)(NSError *))a0;
+ (BOOL)wasEverAvailable;

- (id)init;

@end
