@class NSString, CIFilter, CIImage, CIContext;
@protocol MTLCommandQueue;

@interface IKFilterPreviewView : MTKView <MTKViewDelegate> {
    CIImage *checkerBoardImage;
}

@property (retain) CIFilter *currentFilter;
@property (retain) CIImage *baseImage;
@property (retain) CIContext *cicontext;
@property (retain) id<MTLCommandQueue> commandQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setImage:(id)a0;
- (void)awakeFromNib;
- (id)imageToDraw;
- (void)mtkView:(id)a0 drawableSizeWillChange:(struct CGSize { double x0; double x1; })a1;
- (void)drawInMTKView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 device:(id)a1;
- (id)backdropChecker;
- (id)alternateImage:(struct CGSize { double x0; double x1; })a0;
- (void)setFilterByName:(id)a0;

@end
