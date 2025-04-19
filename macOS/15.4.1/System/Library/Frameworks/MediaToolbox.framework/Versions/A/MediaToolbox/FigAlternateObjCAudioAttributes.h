@class NSArray;

@interface FigAlternateObjCAudioAttributes : FigKVCInspectable {
    struct OpaqueFigAlternate { } *_alternate;
    NSArray *_formatIDs;
    struct OpaqueFigSimpleMutex { } *_mutex;
}

@property (readonly, nonatomic) NSArray *formatIDs;

- (void)dealloc;
- (id)channelCountForMediaOption:(id)a0;
- (id)initWithFigAlternate:(struct OpaqueFigAlternate { } *)a0;
- (id)isBinauralMediaOption:(id)a0;
- (id)isDownmixMediaOption:(id)a0;
- (id)isImmersiveMediaOption:(id)a0;
- (id)sampleRateForMediaOption:(id)a0;

@end
