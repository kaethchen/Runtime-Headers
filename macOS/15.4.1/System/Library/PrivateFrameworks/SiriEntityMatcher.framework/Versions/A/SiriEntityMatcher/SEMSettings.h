@class SEMLocalization;

@interface SEMSettings : NSObject {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _assistantEnabled;
}

@property (readonly) SEMLocalization *localization;

+ (id)defaultSettings;
+ (void)disableOverrideAcceptAllSets;
+ (void)enableOverrideAcceptAllSets;
+ (BOOL)isUserVaultEnabled;
+ (BOOL)useMediaThresholdFiltering;
+ (BOOL)useSensitiveLogging;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)refresh;
- (BOOL)isAssistantEnabled;
- (BOOL)isEvaluationEnabled;
- (void)setEvaluationEnabled:(BOOL)a0;
- (BOOL)_isSiriUODSupported;
- (id)initWithLocalization:(id)a0 assistantEnabled:(BOOL)a1;
- (BOOL)isSupportedDevicePlatform:(unsigned char)a0;
- (BOOL)isVanillaContainersEnabled;

@end
