@class NSString, NSArray, NSDictionary;

@interface AVSegmentedMediaReport : NSObject {
    NSDictionary *_dict;
}

@property (readonly, nonatomic) long long averageBitRate;
@property (readonly, nonatomic) long long maxBitRate;
@property (readonly, nonatomic) long long IFrameAverageBitRate;
@property (readonly, nonatomic) long long IFrameMaxBitRate;
@property (readonly, nonatomic) float videoFrameRate;
@property (readonly, nonatomic) long long numberOfAudioChannels;
@property (readonly, nonatomic) NSString *audioCodecInfo;
@property (readonly, nonatomic) NSString *videoCodecInfo;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } videoDimensions;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } IFrameVideoDimensions;
@property (readonly, nonatomic) NSArray *closedCaptionReports;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
