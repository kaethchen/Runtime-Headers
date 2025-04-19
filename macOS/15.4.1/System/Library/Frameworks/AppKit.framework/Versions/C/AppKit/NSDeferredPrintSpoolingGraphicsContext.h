@class NSPrintSpoolingGraphicsContext, NSPrintInfo, NSObject, NSDeferredPageSpoolingOperation;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NSDeferredPrintSpoolingGraphicsContext : NSCGSContext <NSPrintGraphicsContextAdvancing> {
    NSObject<OS_dispatch_queue> *_printQueue;
    NSObject<OS_dispatch_group> *_completionGroup;
    NSPrintInfo *_printInfo;
    BOOL _needsToEndDocument;
    struct CGContext { } *_blackHoleContext;
    NSDeferredPageSpoolingOperation *_currentPageOperation;
    NSPrintSpoolingGraphicsContext *_pdfContext;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)attributes;
- (void)endPage;
- (void)_performOnPrintQueue:(id /* block */)a0;
- (void)beginDocumentWithTitle:(id)a0;
- (void)beginPageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endDocument;
- (void)flushGraphics;
- (void *)graphicsPort;
- (id)initWithPrintInfo:(id)a0 completionGroup:(id)a1;
- (BOOL)isDrawingToScreen;

@end
