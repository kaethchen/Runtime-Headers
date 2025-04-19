@class MADVideoRequest;

@interface MADServiceVideoTask : NSObject

@property (readonly, nonatomic) MADVideoRequest *request;

+ (id)taskForRequest:(id)a0;

- (id)finalize;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)configureVideoProcessor:(id)a0;

@end
