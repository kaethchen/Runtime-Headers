@class NSURL;

@interface PIParallaxStyleUserURLProvider : NSObject <PIParallaxStyleURLProvider>

@property (retain, nonatomic) NSURL *baseURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBaseURL:(id)a0;
- (id)urlForIdentifier:(id)a0;

@end
