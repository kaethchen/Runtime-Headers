@class NSURL, NSString, NSMutableData;

@interface ICPDFGenerator : NSObject {
    struct CGContext { } *_pdfContext;
}

@property (copy, nonatomic) NSURL *fileURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pageRect;
@property (retain, nonatomic) NSMutableData *data;
@property (readonly, nonatomic) NSURL *url;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)startGenerating;
- (void)addPageWithPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 renderBlock:(id /* block */)a1;
- (void)addPageWithRenderBlock:(id /* block */)a0;
- (void)finishGenerating;
- (id)initWithMutableData:(id)a0 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 title:(id)a2;
- (id)initWithURL:(id)a0 pageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 title:(id)a2;

@end
