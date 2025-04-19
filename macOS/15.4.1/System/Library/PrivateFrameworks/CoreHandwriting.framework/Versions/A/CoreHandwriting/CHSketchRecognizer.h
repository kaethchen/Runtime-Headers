@class NSString, CHRecognizer, NSCharacterSet;

@interface CHSketchRecognizer : NSObject <CHRecognizingSketch> {
    CHRecognizer *_recognizer;
}

@property (retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic) struct CGSize { double x0; double x1; } minimumDrawingSize;
@property (readonly, nonatomic) BOOL enableCachingIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
