@class CHRecognitionInsight, NSArray, NSString, NSSet, CHRecognitionInsightRequest, CHEncoderDecoderNetwork, NSObject, CHMathPostProcessingManager;
@protocol OS_dispatch_queue;

@interface CHMathRecognizer : NSObject <CHRecognizingMath> {
    CHRecognitionInsightRequest *_nextRecognitionInsightRequest;
    CHRecognitionInsight *_activeRecognitionInsight;
    NSSet *_declaredVariables;
    NSArray *_locales;
    CHEncoderDecoderNetwork *_recognitionModel;
    NSObject<OS_dispatch_queue> *_recognitionQueue;
}

@property (readonly, nonatomic) CHRecognitionInsight *recordedInsightFromLastRequest;
@property (retain, nonatomic) CHMathPostProcessingManager *postProcessor;
@property (retain, nonatomic) NSSet *declaredVariables;
@property (copy, nonatomic) NSArray *locales;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic) struct CGSize { double width; double height; } minimumDrawingSize;
@property (readonly, nonatomic) BOOL enableCachingIfAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
