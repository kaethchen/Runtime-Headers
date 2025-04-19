@class NSString;

@interface RWIProtocolDOMAudioMediaStats : RWIProtocolJSONObject

@property (nonatomic) int bitrate;
@property (copy, nonatomic) NSString *codec;
@property (copy, nonatomic) NSString *humanReadableCodecString;
@property (nonatomic) int numberOfChannels;
@property (nonatomic) double sampleRate;

- (id)initWithBitrate:(int)a0 codec:(id)a1 humanReadableCodecString:(id)a2 numberOfChannels:(int)a3 sampleRate:(double)a4;

@end
