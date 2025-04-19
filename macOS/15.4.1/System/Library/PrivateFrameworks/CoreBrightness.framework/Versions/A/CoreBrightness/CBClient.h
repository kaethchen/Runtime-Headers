@class CBBlueLightClient, CBAdaptationClient, BrightnessSystemClient;

@interface CBClient : NSObject {
    BrightnessSystemClient *bsc;
}

@property (readonly) CBBlueLightClient *blueLightClient;
@property (readonly) CBAdaptationClient *adaptationClient;

+ (BOOL)supportsAdaptation;
+ (BOOL)supportsBlueLightReduction;

- (void)dealloc;
- (id)init;

@end
