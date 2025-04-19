@class NSIntelligentLightRootConfiguration, NSWindow, SUICIntelligentLightLayer;
@protocol CARenderValue;

@interface NSIntelligentLightRoot : NSObject {
    NSWindow *_window;
    SUICIntelligentLightLayer *_lightLayer;
    unsigned long long _usesAudioLevels;
    double _audioLevel;
    float _minimumPowerLevel;
}

@property (readonly) NSIntelligentLightRootConfiguration *configuration;
@property double audioLevel;
@property float minimumPowerLevel;
@property (readonly, weak) NSWindow *window;
@property (readonly) id<CARenderValue> contents;

+ (void)initialize;
+ (id)rootForWindow:(id)a0 configuration:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)decrementUsesAudioLevels;
- (void)incrementUsesAudioLevels;
- (id)initWithWindow:(id)a0 configuration:(id)a1;
- (void)update;

@end
