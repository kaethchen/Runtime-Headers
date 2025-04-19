@class OKProducerPlugin, OKDocument;

@interface OKProducer : NSObject

@property (retain, nonatomic) OKProducerPlugin *plugin;
@property (retain, nonatomic) OKDocument *document;

+ (void)setupJavascriptContext:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)author:(BOOL)a0 progressBlock:(id /* block */)a1 requiresProducer:(inout BOOL *)a2 error:(id *)a3;
- (void)cleanupDocument:(id /* block */)a0;
- (void)didChangeTextForWidget:(id)a0 toSettings:(id)a1;
- (void)didPanMediaForWidget:(id)a0 toOffset:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithDocument:(id)a0 andPlugin:(id)a1;
- (BOOL)migrateDocument:(id /* block */)a0 error:(id *)a1;
- (void)updateSynopsisGuideline;
- (void)updateWidget:(id)a0 withSettings:(id)a1;

@end
