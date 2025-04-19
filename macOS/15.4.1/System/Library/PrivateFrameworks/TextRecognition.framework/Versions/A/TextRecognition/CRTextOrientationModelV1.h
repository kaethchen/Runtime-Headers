@class NSURL;

@interface CRTextOrientationModelV1 : CRTextSequenceRecognizerModelEspresso

@property (nonatomic, readonly) NSURL *modelURL;

+ (id)defaultURLOfModelInThisBundle;

- (id)init;
- (id)initWithConfiguration:(id)a0 error:(id *)a1;

@end
