@interface AVB17221AEMAAFAES3StreamFormat : AVB17221AEMAAFStreamFormat

@property unsigned char framesPerFrame;
@property unsigned short streamsPerFrame;
@property unsigned char dataTypeReference;
@property unsigned short dataType;

+ (id)keyPathsForValuesAffectingDataType;
+ (id)keyPathsForValuesAffectingDataTypeReference;
+ (id)keyPathsForValuesAffectingFramesPerFrame;
+ (id)keyPathsForValuesAffectingStreamsPerFrame;

- (id)init;
- (unsigned short)dataType;
- (void)setDataType:(unsigned short)a0;
- (unsigned short)numberOfAudioChannels;
- (unsigned short)streamsPerFrame;
- (unsigned char)dataTypeReference;
- (id)formatsByExpandingFormat;
- (unsigned char)framesPerFrame;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isSupportedFormat;
- (unsigned short)maximumIntervalFramesPerIntervalPeriod:(unsigned int)a0;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (id)packetRate;
- (void)setDataTypeReference:(unsigned char)a0;
- (void)setFramesPerFrame:(unsigned char)a0;
- (void)setStreamsPerFrame:(unsigned short)a0;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;

@end
