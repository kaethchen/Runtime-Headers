@class NSDictionary;

@interface CTEmojiImageStrike : NSObject

@property (copy) NSDictionary *provenance;
@property (readonly) struct CGImage { } *cgImage;
@property (readonly) struct CGSize { double width; double height; } alignmentInset;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImage:(struct CGImage { } *)a0 alignmentInset:(struct CGSize { double x0; double x1; })a1;
- (id)initWithImage:(struct CGImage { } *)a0 alignmentInset:(struct CGSize { double x0; double x1; })a1 provenanceInfo:(id)a2;
- (id)initWithImage:(struct CGImage { } *)a0 imageProperties:(id)a1;

@end
