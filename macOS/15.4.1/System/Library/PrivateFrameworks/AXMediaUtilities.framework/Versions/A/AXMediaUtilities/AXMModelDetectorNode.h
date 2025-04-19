@class NSURL, NSString, VNCoreMLModel;

@interface AXMModelDetectorNode : AXMEvaluationNode {
    VNCoreMLModel *_model;
}

@property (retain, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSString *modelIdentifier;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_loadModel:(id *)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (BOOL)preloadModelIfNeeded:(id *)a0;
- (BOOL)requiresVisionFramework;

@end
