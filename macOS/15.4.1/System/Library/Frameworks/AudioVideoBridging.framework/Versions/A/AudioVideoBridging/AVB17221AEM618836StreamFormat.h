@interface AVB17221AEM618836StreamFormat : AVB17221AEM61883StreamFormat

@property (readonly) unsigned char fdfEvt;
@property unsigned char fdfSfc;
@property unsigned char dbs;
@property (getter=isBlockingMode) BOOL blockingMode;
@property (getter=isNonblockingMode) BOOL nonblockingMode;
@property BOOL upTo;
@property (getter=isSynchronousClock) BOOL synchronousClock;

+ (id)keyPathsForValuesAffectingBlockingMode;
+ (id)keyPathsForValuesAffectingDbs;
+ (id)keyPathsForValuesAffectingFdfEvt;
+ (id)keyPathsForValuesAffectingFdfSfc;
+ (id)keyPathsForValuesAffectingNonblockingMode;
+ (id)keyPathsForValuesAffectingSynchronousClock;
+ (id)keyPathsForValuesAffectingUpTo;

- (id)init;
- (id)samplingRate;
- (void)setSamplingRate:(id)a0;
- (unsigned short)numberOfAudioChannels;
- (void)setBlockingMode:(BOOL)a0;
- (unsigned char)dbs;
- (void)setDbs:(unsigned char)a0;
- (unsigned char)fdfEvt;
- (unsigned char)fdfSfc;
- (id)formatsByExpandingFormat;
- (BOOL)isAudioFormat;
- (BOOL)isCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isPotentiallyCompatibleAsListenerForFormat:(id)a0;
- (BOOL)isSupportedFormat;
- (unsigned short)maximumIntervalFramesPerIntervalPeriod:(unsigned int)a0;
- (unsigned int)maximumPDUSize;
- (unsigned int)maximumPayloadSize;
- (id)packetRate;
- (void)setFdfEvt:(unsigned char)a0;
- (void)setFdfSfc:(unsigned char)a0;
- (void)setNonblockingMode:(BOOL)a0;
- (void)setSynchronousClock:(BOOL)a0;
- (void)setUpTo:(BOOL)a0;
- (BOOL)upTo;

@end
