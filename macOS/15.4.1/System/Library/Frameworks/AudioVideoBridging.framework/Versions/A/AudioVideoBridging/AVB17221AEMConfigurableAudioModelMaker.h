@interface AVB17221AEMConfigurableAudioModelMaker : AVB17221AEMModelMaker

@property (nonatomic) unsigned short inputStreamCount;
@property (nonatomic) unsigned short outputStreamCount;
@property (nonatomic) unsigned short channelCount;
@property (nonatomic) BOOL configPerCount;
@property (nonatomic) BOOL use44k1;
@property (nonatomic) BOOL use48k;
@property (nonatomic) BOOL use88k2;
@property (nonatomic) BOOL use96k;
@property (nonatomic) BOOL use176k4;
@property (nonatomic) BOOL use192k;
@property (nonatomic) BOOL useAM824;
@property (nonatomic) BOOL useAAFInt;
@property (nonatomic) BOOL useAAFFloat;
@property (nonatomic) BOOL useCRF;
@property (nonatomic) BOOL useUpto;

- (id)init;
- (id)bestStreamFormatFromFormats:(id)a0 forSamplingRate:(id)a1;
- (id)entityModelWithAVBInterface:(id)a0;
- (id)streamPortWithIndex:(unsigned short)a0 isInput:(BOOL)a1;
- (id)streamWithIndex:(unsigned short)a0 isInput:(BOOL)a1 samplingRates:(id)a2 mediaClockStream:(BOOL)a3;

@end
