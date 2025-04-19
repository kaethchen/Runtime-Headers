@class WebPDFView;

@interface WebPDFPrefUpdatingProxy : NSProxy {
    WebPDFView *view;
}

- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (id)initWithView:(id)a0;

@end
