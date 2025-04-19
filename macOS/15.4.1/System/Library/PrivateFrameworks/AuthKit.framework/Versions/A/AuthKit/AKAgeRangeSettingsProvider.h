@class AKAgeRangeSettingsCache, AKAppleIDAuthenticationController;

@interface AKAgeRangeSettingsProvider : NSObject {
    AKAppleIDAuthenticationController *_authController;
}

@property (readonly, nonatomic) AKAgeRangeSettingsCache *ageRangeCache;

- (id)init;
- (void).cxx_destruct;
- (void)refreshAgeRangeWithCompletion:(id /* block */)a0;

@end
