@class SFLocalImage;

@interface SearchUILocalImage : SearchUIImage

@property (retain, nonatomic) SFLocalImage *sfImage;

- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (int)defaultCornerRoundingStyle;
- (BOOL)shouldReadTemplateStatusFromLoadedImage;

@end
