@class NSArray;

@interface BitrateLimits : NSObject {
    unsigned long long defaultValue;
    unsigned long long defaultValueCellular;
    unsigned long long defaultValue2G;
}

@property (readonly, nonatomic) NSArray *limits;

- (void)dealloc;
- (void)capDefaultValues:(unsigned long long)a0;
- (id)commonAudioOnlyLimits;
- (id)commonAudioOnlyLimitsLegacy;
- (id)commonAudioVideoLimits;
- (unsigned long long)defaultValueForNetwork:(BOOL)a0;
- (id)initWithOperatingMode:(unsigned char)a0 withBitrateCap:(unsigned long long)a1 useCaseWatchContinuity:(BOOL)a2;
- (void)setUpDefaultValuesAudioVideo;
- (void)setupDefaultValuesAudio;

@end
