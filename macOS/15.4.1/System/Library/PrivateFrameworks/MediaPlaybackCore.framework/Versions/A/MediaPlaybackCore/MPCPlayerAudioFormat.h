@class NSString, NSDictionary, MPNowPlayingInfoAudioFormat;

@interface MPCPlayerAudioFormat : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned int originChannelLayout;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) MPNowPlayingInfoAudioFormat *nowPlayingAudioFormat;
@property (readonly, copy, nonatomic) NSString *groupID;
@property (readonly, copy, nonatomic) NSString *stableVariantID;
@property (readonly, nonatomic) long long tier;
@property (readonly, nonatomic) long long bitrate;
@property (readonly, nonatomic) long long sampleRate;
@property (readonly, nonatomic) long long bitDepth;
@property (readonly, nonatomic) unsigned int codec;
@property (readonly, nonatomic, getter=isSpatialized) BOOL spatialized;
@property (readonly, nonatomic, getter=isMultiChannel) BOOL multiChannel;
@property (readonly, nonatomic) long long renderingMode;
@property (readonly, nonatomic) unsigned int channelLayout;
@property (readonly, nonatomic) NSString *audioChannelLayoutDescription;
@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, nonatomic) NSString *debugTierDescription;
@property (readonly, nonatomic) NSString *debugBitRateDescription;
@property (readonly, nonatomic) NSString *debugBitDepthDescription;
@property (readonly, nonatomic) NSString *debugSampleRateDescription;
@property (readonly, nonatomic) NSString *debugCodecDescription;
@property (readonly, nonatomic) NSString *debugChannelCountDescription;
@property (readonly, nonatomic) NSString *debugChannelLayoutDescription;

+ (id)lossyHighQualityStereoFormat;
+ (id)lossyLowQualityStereoFormat;
+ (id)payloadValueFromJSONValue:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)_descriptionForChannelLayoutTag:(unsigned int)a0;
- (unsigned int)_computedChannelLayoutTagFromHLSData:(id)a0 channelCount:(long long)a1;
- (long long)_computedTierFromHLSDataWithChannelCount:(long long)a0;
- (BOOL)_isBinauralFormat:(id)a0;
- (BOOL)_isDerivedFromSpatialFormat:(id)a0;
- (BOOL)_isHLSVersion:(id)a0 greatherThanOrEqualTo:(id)a1;
- (BOOL)_isMultichannelFormat:(id)a0;
- (BOOL)_isSpatialFormat:(id)a0;
- (id)analyticsFormatInfo;
- (id)audioFormatWithRenderingMode:(long long)a0;
- (id)debugOriginChannelCountDescription;
- (id)debugOriginChannelLayoutDescription;
- (id)initWithJSONDictionaryRepresentation:(id)a0 stableVariantID:(id)a1;
- (id)initWithNowPlayingInfoAudioFormat:(id)a0;
- (id)initWithTier:(long long)a0 codec:(unsigned int)a1 spatialized:(BOOL)a2 multiChannel:(BOOL)a3 channelLayout:(unsigned int)a4 sampleRate:(long long)a5 stableVariantID:(id)a6;
- (id)mpc_jsonValue;

@end
