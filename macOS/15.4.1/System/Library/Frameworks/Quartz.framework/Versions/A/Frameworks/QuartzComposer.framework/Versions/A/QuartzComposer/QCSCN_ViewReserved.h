@class NSTimer, QCSCN_Renderer, NSRecursiveLock, NSOpenGLPixelFormat, QCSCN_LoadingLayer, NSOperationQueue, QCSCN_EventHandler, QCSCN_Scene, NSColor, NSOpenGLContext;

@interface QCSCN_ViewReserved : NSObject {
    NSOpenGLContext *_openGLContext;
    NSOpenGLPixelFormat *_pixelFormat;
    struct __CVDisplayLink { } *_displayLink;
    BOOL _displayLinkRunning;
    unsigned int _mainViewDisplayID;
    NSTimer *_timer;
    BOOL _repetitiveRedisplayRunning;
    BOOL _allowsBrowsing;
    BOOL _enableJittering;
    BOOL _jitteringSupported;
    BOOL _jitteringIsComplete;
    BOOL _abortJittering;
    BOOL _jitteringThreadRunning;
    BOOL _restartJittering;
    NSRecursiveLock *_jitteringLock;
    BOOL _clearViewportWhenDrawing;
    QCSCN_LoadingLayer *_loadingLayer;
    BOOL _asynchronousLoading;
    NSOperationQueue *_loadingQueue;
    id _delegate;
    QCSCN_Renderer *_renderer;
    QCSCN_EventHandler *_eventHandler;
    QCSCN_Scene *_scene;
    NSRecursiveLock *_lock;
    NSRecursiveLock *_glContextLock;
    BOOL _ibNoMultisampling;
    NSColor *_backgroundColor;
    BOOL _isOpaque;
    BOOL _firstDrawDone;
}

@property BOOL dirty;

- (void)dealloc;

@end
