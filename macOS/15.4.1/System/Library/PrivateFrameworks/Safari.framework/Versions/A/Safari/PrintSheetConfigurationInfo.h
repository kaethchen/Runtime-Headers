@class _WKFrameHandle;

@interface PrintSheetConfigurationInfo : NSObject

@property (readonly, nonatomic, getter=shouldWaitUntilDone) BOOL waitUntilDone;
@property (readonly, nonatomic) _WKFrameHandle *frameHandle;
@property (readonly, nonatomic) struct CGSize { double width; double height; } pdfFirstPageSize;

- (void).cxx_destruct;
- (id)initWithFrameHandle:(id)a0 shouldWaitUntilDone:(BOOL)a1 pdfFirstPageSize:(struct CGSize { double x0; double x1; })a2;

@end
