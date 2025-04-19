@interface PKInternalSettings : NSObject

@property (readonly, nonatomic) BOOL showResetImageWandOnboardingInPalette;
@property (readonly, nonatomic) BOOL forceShowImageWandOnboarding;
@property (readonly, nonatomic) BOOL imageWandOnboardingDisabled;

+ (id)sharedInstance;

@end
