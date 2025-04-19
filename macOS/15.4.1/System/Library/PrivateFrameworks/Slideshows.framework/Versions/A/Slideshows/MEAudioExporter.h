@class MEExporter;

@interface MEAudioExporter : NSObject {
    MEExporter *_exporter;
}

- (id)exportToType:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (id)_exportComposition:(id)a0 andAudioMix:(id)a1 toPath:(id)a2 withDuration:(double)a3 error:(id *)a4;
- (id)initWithExporter:(id)a0;

@end
