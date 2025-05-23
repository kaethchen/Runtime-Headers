@class NSString, NSMutableSet;

@interface VCMediaNegotiatorResults : NSObject

@property (nonatomic) BOOL supportsDynamicMaxBitrate;
@property (retain, nonatomic) NSString *remoteUserAgent;
@property (retain, nonatomic) NSString *remoteBasebandCodec;
@property (nonatomic) unsigned int remoteBasebandCodecSampleRate;
@property (readonly, nonatomic) NSMutableSet *bandwidthConfigurations;
@property (nonatomic) unsigned char mediaControlInfoVersion;
@property (nonatomic) unsigned int remoteBlobVersion;
@property (nonatomic) int controlChannelVersion;
@property (nonatomic) union tagNTP { unsigned long long wide; struct { unsigned int frac; unsigned int sec; } time; } remoteBlobCreationTime;
@property (nonatomic) int accessNetworkType;

- (void)dealloc;
- (id)init;
- (void)addBandwidthConfigurations:(id)a0;
- (unsigned int)maxBandwidthWithArbiterMode:(unsigned char)a0 connectionType:(int)a1;

@end
