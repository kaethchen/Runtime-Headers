@interface AFSystemAssistantExperienceStatusManager : NSObject

@property BOOL deviceSupportsSAE;
@property BOOL saeEnabled;
@property BOOL saeAvailable;
@property BOOL swaiEnabled;
@property BOOL visualIntelligenceEnabled;

+ (id)sharedManager;
+ (BOOL)isSAEEnabled;
+ (BOOL)ust_swaiEnabled;
+ (BOOL)deviceSupportsSAE;
+ (BOOL)isVisualIntelligenceEnabled;
+ (BOOL)saeAvailable;
+ (BOOL)swaiEnabled;
+ (BOOL)ust_deviceSupportsSAE;
+ (BOOL)ust_saeEnabled;

- (id)init;
- (void)fetchGenerativeModelsAvailability;

@end
