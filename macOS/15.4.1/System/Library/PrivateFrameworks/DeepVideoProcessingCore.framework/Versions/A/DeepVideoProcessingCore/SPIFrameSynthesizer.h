@class NSString, FRCFrameSynthesizer;

@interface SPIFrameSynthesizer : NSObject <FrameSynthesizerProtocol>

@property (retain, nonatomic) FRCFrameSynthesizer *spiInstance;
@property (readonly, nonatomic) unsigned long long flowWidth;
@property (readonly, nonatomic) unsigned long long flowHeight;
@property (nonatomic) BOOL streamingMode;
@property (nonatomic) BOOL isFirstFrameInStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)allocateResources;
- (void)releaseResources;
- (id)initWithUsage:(long long)a0;
- (id)initWithUsage:(long long)a0 qualityMode:(long long)a1;
- (id)initWithUsage:(long long)a0 qualityMode:(long long)a1 useLegacyNormalization:(BOOL)a2;
- (void)setFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3;
- (void)synthesizeFrameForTimeScale:(float)a0 destination:(struct __CVBuffer { } *)a1;
- (void)synthesizeFrameFromFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 timeScale:(float)a4 destination:(struct __CVBuffer { } *)a5;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 numberOfFrames:(unsigned long long)a4 withError:(id *)a5;
- (id)synthesizeFramesFromFirstFrame:(struct __CVBuffer { } *)a0 secondFrame:(struct __CVBuffer { } *)a1 forwardFlow:(struct __CVBuffer { } *)a2 backwardFlow:(struct __CVBuffer { } *)a3 timeScales:(id)a4 withError:(id *)a5;

@end
