@interface AVB17221AEM618836AM824StreamFormat : AVB17221AEM618836StreamFormat

@property unsigned char iec60958Cnt;
@property unsigned char mblaCnt;
@property unsigned char midiCnt;
@property unsigned char smpteCnt;

+ (id)keyPathsForValuesAffectingIec60958Cnt;
+ (id)keyPathsForValuesAffectingMblaCnt;
+ (id)keyPathsForValuesAffectingMidiCnt;
+ (id)keyPathsForValuesAffectingSmpteCnt;

- (id)init;
- (unsigned short)numberOfAudioChannels;
- (unsigned char)mblaCnt;
- (BOOL)isControlFormat;
- (unsigned char)midiCnt;
- (void)setIec60958Cnt:(unsigned char)a0;
- (id)formatsByExpandingFormat;
- (unsigned char)iec60958Cnt;
- (BOOL)isAudioFormat;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isMIDIFormat;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isSMPTEFormat;
- (BOOL)isSupportedFormat;
- (void)setMblaCnt:(unsigned char)a0;
- (void)setMidiCnt:(unsigned char)a0;
- (void)setSmpteCnt:(unsigned char)a0;
- (unsigned char)smpteCnt;
- (id)streamFormatCompatibleWithTalkerFormat:(id)a0;

@end
