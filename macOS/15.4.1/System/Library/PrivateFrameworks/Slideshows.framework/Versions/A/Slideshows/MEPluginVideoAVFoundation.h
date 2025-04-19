@class NSString, NSDictionary, MERenderer;

@interface MEPluginVideoAVFoundation : MEPlugin <MEPluginRegistration, MEPluginTypeVideo> {
    double _currentTime;
    double _frameRate;
    double _frameDuration;
    double _adjustedEndTime;
    double _endTime;
    double _timescale;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _currentPresentationTime;
    MERenderer *_renderer;
    struct CGColorSpace { } *_sourceColorSpace;
    unsigned int *_renderBuffer;
    NSString *_outputFileType;
    NSDictionary *_videoSettings;
    NSDictionary *_audioSettings;
}

+ (BOOL)matchesOptions:(id)a0;
+ (void)registerPluginsToLoader:(id)a0;

- (void)dealloc;
- (void)_reportProgress:(double)a0;
- (short)_appendVideoFrameAtTime:(double)a0 toBufferAdaptor:(id)a1;
- (void)_cleanupExport;
- (void)_configureSettingsWithPluginOptions:(id)a0 andSize:(struct CGSize { double x0; double x1; })a1;
- (void)_convertRGBAToARGB:(unsigned int *)a0 withBytesPerRow:(unsigned int)a1;
- (id)_makeCoverArtMetadataItemWithTime:(double)a0 andFileType:(id)a1;
- (void)_setupExportForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)exportToFile:(id)a0 withAudio:(id)a1 andOptions:(id)a2 error:(id *)a3;
- (id)initWithIdentifier:(id)a0 andDocument:(id)a1 andDelegate:(id)a2;

@end
