@class NSNumber;

@interface MTRCameraAVStreamManagementClusterAudioStreamStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *audioStreamID;
@property (copy, nonatomic) NSNumber *streamUsage;
@property (copy, nonatomic) NSNumber *audioCodec;
@property (copy, nonatomic) NSNumber *channelCount;
@property (copy, nonatomic) NSNumber *sampleRate;
@property (copy, nonatomic) NSNumber *bitRate;
@property (copy, nonatomic) NSNumber *bitDepth;
@property (copy, nonatomic) NSNumber *referenceCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
