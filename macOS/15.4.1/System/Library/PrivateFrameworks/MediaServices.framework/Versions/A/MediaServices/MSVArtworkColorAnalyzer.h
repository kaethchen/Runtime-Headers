@interface MSVArtworkColorAnalyzer : NSObject

@property (retain, nonatomic) struct CGImage { } *sourceImage;
@property (nonatomic) struct CGSize { double width; double height; } preferredImageSize;
@property (nonatomic) long long algorithm;

+ (BOOL)isLightColor:(struct CGColor { } *)a0;

- (void).cxx_destruct;
- (id)analyze;
- (void)analyzeWithCompletionHandler:(id /* block */)a0;
- (id)initWithSourceImage:(struct CGImage { } *)a0;

@end
