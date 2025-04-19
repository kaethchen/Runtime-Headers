@class NSMutableArray, QCPatch, QCStructurePort, QCIndexPort, QCBooleanPort;

@interface QCSlideShowController : NSObject {
    QCPatch *_patch;
    QCBooleanPort *_signalPort;
    QCStructurePort *_structurePort;
    QCIndexPort *_countPort;
    QCIndexPort *_swapPort;
    id _source;
    BOOL _hasNames;
    NSMutableArray *_imageCache;
    struct _NSRange { unsigned long long location; unsigned long long length; } _imageRange;
    unsigned long long _imageSwap;
    BOOL _updating;
    unsigned long long _pendingLoads;
    void *_unused[4];
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)dataSource;
- (void)willRenderPatch;
- (void)_doneLoadingImage:(id)a0;
- (void)_startLoadingImage:(id)a0;
- (void)didRenderPatch;
- (id)initWithPatch:(id)a0 dataSource:(id)a1;
- (id)patch;

@end
