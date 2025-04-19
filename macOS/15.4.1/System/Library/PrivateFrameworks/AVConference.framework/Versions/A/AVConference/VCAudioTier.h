@class VCAudioPayloadConfig;

@interface VCAudioTier : NSObject {
    BOOL _bundlingAppliedByCodec;
    unsigned int _payloadSize;
    unsigned int _headerSize;
}

@property (readonly) unsigned int networkBitrate;
@property (readonly) unsigned int audioCodecBitrate;
@property (readonly) unsigned int packetsPerBundle;
@property (readonly) unsigned int redPayloadSize;
@property (readonly) unsigned int redNumPayloads;
@property (readonly) unsigned int redMaxDelay20ms;
@property (readonly) unsigned int redPayloadBitrate;
@property (readonly) VCAudioPayloadConfig *payloadConfig;
@property (nonatomic) BOOL shortREDEnabled;

+ (BOOL)bundlingAppliedByCodecForPayload:(int)a0 mode:(int)a1;
+ (unsigned int)redPayloadOverheadBytesWithNumPayloads:(unsigned int)a0;
+ (unsigned int)totalAudioBitrateWithTierConfig:(const struct tagVCAudioTierConfig { id x0; BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionary;
- (id)initWithConfig:(const struct tagVCAudioTierConfig { id x0; BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;
- (void)setUpAssignedPropertiesWithConfig:(const struct tagVCAudioTierConfig { id x0; BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;
- (void)setUpCalculatedPropertiesWithConfig:(const struct tagVCAudioTierConfig { id x0; BOOL x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; } *)a0;

@end
