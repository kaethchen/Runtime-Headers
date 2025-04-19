@class PNCVNLPWrapper;

@interface CLIPInferenceEngine : NSObject

@property (retain, nonatomic) PNCVNLPWrapper *clipModelWrapper;

- (id)init;
- (void).cxx_destruct;
- (id)encodeQuery:(id)a0;

@end
