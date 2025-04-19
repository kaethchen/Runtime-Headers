@class NSString;

@interface PESpatialAudioMixMode : NSObject

@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *renderingStyle;
@property (readonly, nonatomic) unsigned long long type;

+ (id)audioMixModeForRenderingStyle:(id)a0;
+ (id)audioMixModes;

- (id)initWithType:(unsigned long long)a0;

@end
