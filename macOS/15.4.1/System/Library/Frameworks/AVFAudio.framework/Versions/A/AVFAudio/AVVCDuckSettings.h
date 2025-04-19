@class AVVCDuckLevel, AVVCDuckOverride, AVVCDuckFadeDuration;

@interface AVVCDuckSettings : NSObject

@property (retain, nonatomic) AVVCDuckOverride *duckOverride;
@property (retain, nonatomic) AVVCDuckLevel *duckLevel;
@property (retain, nonatomic) AVVCDuckFadeDuration *fadeDuration;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
