@interface CIRenderTask : NSObject {
    void *_priv;
}

+ (id)rendertaskWithInternalTask:(void *)a0;

- (void)dealloc;
- (id)init;
- (void *)internalRepresentation;
- (id)_pdfDataRepresentation;
- (id)initWithInternalTask:(void *)a0;
- (id)waitUntilCompletedAndReturnError:(id *)a0;

@end
