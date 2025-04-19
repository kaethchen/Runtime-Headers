@interface AVSSettings : NSObject

@property (class, nonatomic) BOOL avsFeatureEnabled;
@property (class, nonatomic) BOOL shouldHideAudioDonationPrompt;

- (id)init;

@end
