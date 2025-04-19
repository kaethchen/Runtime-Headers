@class NSString, NSXPCConnection, NSCharacterSet;

@interface CHRemoteSketchRecognizer : CHRemoteRecognizer <CHRecognizingSketch> {
    NSXPCConnection *__connection;
}

@property (retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic) struct CGSize { double x0; double x1; } minimumDrawingSize;
@property (readonly, nonatomic) BOOL enableCachingIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPriority:(long long)a0;
- (BOOL)isEqualToRemoteSketchRecognizer:(id)a0;
- (id)sketchRecognitionResultsForDrawing:(id)a0 options:(id)a1;
- (id)sketchRecognitionResultsForDrawing:(id)a0 options:(id)a1 error:(id *)a2;

@end
