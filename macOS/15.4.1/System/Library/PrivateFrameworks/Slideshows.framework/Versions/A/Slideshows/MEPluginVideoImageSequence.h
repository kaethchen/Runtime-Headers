@class MERenderer;

@interface MEPluginVideoImageSequence : MEPlugin <MEPluginRegistration, MEPluginTypeVideo> {
    MERenderer *_renderer;
    unsigned int *_renderBuffer;
}

+ (BOOL)matchesOptions:(id)a0;
+ (void)registerPluginsToLoader:(id)a0;

- (void)dealloc;
- (void)_cleanupExport;
- (void)_setupExportForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)exportToFile:(id)a0 withAudio:(id)a1 andOptions:(id)a2 error:(id *)a3;
- (id)initWithIdentifier:(id)a0 andDocument:(id)a1 andDelegate:(id)a2;

@end
