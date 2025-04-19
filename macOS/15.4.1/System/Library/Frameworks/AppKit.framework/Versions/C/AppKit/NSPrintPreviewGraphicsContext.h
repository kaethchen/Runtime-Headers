@class NSGraphicsContext;

@interface NSPrintPreviewGraphicsContext : NSProxy {
    NSGraphicsContext *_previousContext;
}

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)attributes;
- (id)initWithPreviousContext:(id)a0;
- (BOOL)isDrawingToScreen;
- (BOOL)isFlipped;

@end
