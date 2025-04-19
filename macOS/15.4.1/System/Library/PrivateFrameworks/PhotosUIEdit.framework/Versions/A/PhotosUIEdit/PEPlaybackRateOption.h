@class NSString;

@interface PEPlaybackRateOption : NSObject

@property (readonly, nonatomic) unsigned long long videoFrameRate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) float playbackRate;
@property (readonly, nonatomic) unsigned long long type;

+ (id)playbackRateOptionsForEditSource:(id)a0;
+ (id)_playbackRateOptionsForFrameRate:(unsigned long long)a0;
+ (id)playbackRateOptionsForAsset:(id)a0;

- (id)initWithType:(unsigned long long)a0;
- (id)initWithType:(unsigned long long)a0 videoFrameRate:(unsigned long long)a1;

@end
