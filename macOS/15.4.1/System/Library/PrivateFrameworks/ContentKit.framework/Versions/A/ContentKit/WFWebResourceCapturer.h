@interface WFWebResourceCapturer : NSObject

@property (retain, nonatomic) WFWebResourceCapturer *retainedSelf;
@property (copy, nonatomic) id /* block */ generatePDFCompletion;

+ (void)getImageRepresentationForWebResource:(id)a0 atSize:(struct CGSize { double x0; double x1; })a1 coercionOptions:(id)a2 completionHandler:(id /* block */)a3;
+ (void)getPasteboardRepresentationForWebResource:(id)a0 type:(id)a1 coercionOptions:(id)a2 completionHandler:(id /* block */)a3;

- (void).cxx_destruct;
- (void)printOperationDidRun:(id)a0 success:(BOOL)a1 contextInfo:(void *)a2;
- (void)generatePDFForWebResource:(id)a0 includeMargin:(BOOL)a1 coercionOptions:(id)a2 completionHandler:(id /* block */)a3;
- (void)generatePDFForWebView:(id)a0 printInfo:(id)a1 completionHandler:(id /* block */)a2;
- (id)printInfoWithMargin:(BOOL)a0 outputURL:(id)a1;

@end
