@class MLModel;

@interface CRTextDetectorModelV3CoreML : NSObject

@property (readonly, nonatomic) MLModel *model;

+ (id)defaultURLOfModelInThisBundle;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)initWithContentsOfURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)predictionFromImage:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
