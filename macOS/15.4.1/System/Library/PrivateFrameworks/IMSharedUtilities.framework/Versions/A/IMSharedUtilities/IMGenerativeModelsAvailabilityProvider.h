@interface IMGenerativeModelsAvailabilityProvider : NSObject {
    void /* unknown type, empty encoding */ summarizationUseCaseIdentifier;
    void /* unknown type, empty encoding */ generativePlaygroundUseCaseIdentifier;
    void /* unknown type, empty encoding */ summarizationModelsAvailable;
    void /* unknown type, empty encoding */ generativePlaygroundModelsAvailable;
}

+ (BOOL)generativePlaygroundModelsAvailable;
+ (BOOL)messageSummarizationEnabled;
+ (void)setMessageSummarizationUserPreference:(BOOL)a0;
+ (BOOL)summarizationModelsAvailable;
+ (BOOL)summarizationUserPreferenceEnabled;

- (id)init;
- (void).cxx_destruct;

@end
