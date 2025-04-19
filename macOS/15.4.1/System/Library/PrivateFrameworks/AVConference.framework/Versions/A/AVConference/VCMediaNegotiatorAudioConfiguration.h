@class NSMutableSet;

@interface VCMediaNegotiatorAudioConfiguration : VCMediaNegotiatorCommonConfiguration <NSCopying> {
    NSMutableSet *_secondaryPayloads;
}

@property (nonatomic) BOOL allowAudioSwitching;
@property (nonatomic) BOOL allowAudioRecording;
@property (nonatomic) BOOL useSBR;
@property (nonatomic) unsigned int audioUnitNumber;
@property (readonly, nonatomic) NSMutableSet *audioPayloads;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)addAudioPayload:(int)a0 isSecondary:(BOOL)a1;
- (id)initWithAllowAudioSwitching:(BOOL)a0 allowAudioRecording:(BOOL)a1 useSBR:(BOOL)a2 ssrc:(unsigned int)a3 audioUnitNumber:(unsigned int)a4;
- (id)initWithAllowAudioSwitching:(BOOL)a0 allowAudioRecording:(BOOL)a1 useSBR:(BOOL)a2 ssrc:(unsigned int)a3 audioUnitNumber:(unsigned int)a4 audioRuleCollection:(id)a5;
- (BOOL)isSecondaryPayload:(int)a0;

@end
