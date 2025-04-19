@class NSDictionary;

@interface VCTuningParameters : NSObject {
    NSDictionary *_plist;
}

@property (nonatomic) float oneShotFramingDuration;
@property (nonatomic) float cameraResetDuration;
@property (nonatomic) float wideToSuperWideSwitchMargin;
@property (nonatomic) float superWideToWideSwitchMargin;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
