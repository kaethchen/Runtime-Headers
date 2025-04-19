@class NSGraphicsContext, NSString, NSPrintPanel, NSPDFPanel, NSView, NSPrintInfo;

@interface NSPrintOperation : NSObject

@property (class, retain) NSPrintOperation *currentOperation;

@property (readonly, getter=isCopyingOperation) BOOL copyingOperation;
@property (readonly) long long preferredRenderingQuality;
@property (copy) NSString *jobTitle;
@property BOOL showsPrintPanel;
@property BOOL showsProgressPanel;
@property (retain) NSPrintPanel *printPanel;
@property (retain) NSPDFPanel *PDFPanel;
@property BOOL canSpawnSeparateThread;
@property long long pageOrder;
@property (readonly) NSView *view;
@property (copy) NSPrintInfo *printInfo;
@property (readonly) NSGraphicsContext *context;
@property (readonly) struct _NSRange { unsigned long long x0; unsigned long long x1; } pageRange;
@property (readonly) long long currentPage;

+ (id)EPSOperationWithView:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toData:(id)a2;
+ (id)EPSOperationWithView:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toPath:(id)a2 printInfo:(id)a3;
+ (id)PDFOperationWithView:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toData:(id)a2;
+ (id)PDFOperationWithView:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toPath:(id)a2 printInfo:(id)a3;
+ (id)EPSOperationWithView:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toData:(id)a2 printInfo:(id)a3;
+ (id)PDFOperationWithView:(id)a0 insideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toData:(id)a2 printInfo:(id)a3;
+ (void)_setPrintEventRetrofitInfo:(id)a0;
+ (id)printOperationWithView:(id)a0;
+ (id)printOperationWithView:(id)a0 printInfo:(id)a1;

- (void)setAccessoryView:(id)a0;
- (BOOL)_isLockingFocus;
- (void)runOperationModalForWindow:(id)a0 delegate:(id)a1 didRunSelector:(SEL)a2 contextInfo:(void *)a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_currentPageBounds;
- (id)_effectiveJobTitle;
- (long long)_firstJobPageNumber;
- (long long)_firstRenderPageNumber;
- (void)_forceKnowsPageRangeMessage;
- (void)_invalidatePagination;
- (BOOL)_isCancelledAfterHandlingUserEvents;
- (BOOL)_isRenderingBorder;
- (BOOL)_isResponsibleForFileCoordination;
- (long long)_lastJobPageNumber;
- (long long)_lastRenderPageNumber;
- (struct _PrivatePrintOperationInfo { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; long long x10; long long x11; long long x12; long long x13; long long x14; long long x15; long long x16; id x17; id x18; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x19; BOOL x20; BOOL x21; BOOL x22; long long x23; double x24; double x25; double x26; double x27; long long x28; long long x29; struct CGPoint { double x0; double x1; } x30; unsigned int x31; void *x32; long long x33; long long x34; BOOL x35; long long x36; long long x37; long long x38; id x39; BOOL x40; id x41; long long x42; BOOL x43; id x44; id x45; long long x46; id x47; double *x48; long long x49; double *x50; long long x51; } *)_operationInfo;
- (double)_pageScaling;
- (long long)_pageSet;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_renderingBounds;
- (void)_setAllowsDeferredPrintSpooling:(BOOL)a0;
- (void)_setLockingFocus:(BOOL)a0;
- (void)_setPreferredRenderingQuality:(long long)a0;
- (void)_setRenderingBorder:(BOOL)a0;
- (BOOL)_tryToSetCurrentPageNumber:(long long)a0;
- (id)accessoryView;
- (id)baseAffineTransform;
- (void)cleanUpOperation;
- (id)createContext;
- (BOOL)deliverResult;
- (void)destroyContext;
- (BOOL)isEPSOperation;
- (id)jobStyleHint;
- (BOOL)runOperation;
- (void)setBaseAffineTransform:(id)a0;
- (void)setJobStyleHint:(id)a0;
- (void)setShowPanels:(BOOL)a0;
- (BOOL)showPanels;

@end
