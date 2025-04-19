@class AVAssetWriterInputPixelBufferAdaptor, NSString, AVAssetWriter, NSMutableDictionary, NSObject, NSWindow, OKDocumentViewController, AVAssetWriterInput, OKDocument;
@protocol OS_dispatch_queue, NSObject;

@interface OKDocumentMovieExporter : NSObject <OKDocumentViewControllerDelegate> {
    OKDocumentViewController *_documentViewController;
    OKDocument *_document;
    NSWindow *_window;
    long long _windowNumber;
    struct CGSize { double width; double height; } _exportSize;
    struct CGSize { double width; double height; } _renderSize;
    double _duration;
    double _totalDuration;
    double _fadeOutDuration;
    BOOL _keepAspectRatio;
    BOOL _done;
    BOOL _ready;
    BOOL _couchPotatoPlaybackFinished;
    BOOL _isImageExport;
    int _readyCount;
    unsigned long long _previousTime;
    NSString *_keyPath;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInputPixelBufferAdaptor *_bufferAdaptor;
    AVAssetWriterInput *_videoInput;
    struct __CVDisplayLink { } *_displayLink;
    id<NSObject> _activity;
    id /* block */ _progressBlock;
    id /* block */ _completionBlock;
    long long _progressCount;
    float _videoProgressMax;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_audioTracks;
    NSString *_tmpDirectory;
}

@property struct { long long value; int timescale; unsigned int flags; long long epoch; } currentPresentationTime;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_cleanup;
- (BOOL)_setup:(id *)a0;
- (void)cancelExport;
- (id)initWithDocument:(id)a0;
- (struct CGImage { } *)_renderedImage;
- (void)audioFinishedPlayingForTrackID:(id)a0;
- (void)audioStartedPlayingForTrackID:(id)a0 withAVAsset:(id)a1 atVolume:(double)a2;
- (void)audioStartedPlayingForTrackID:(id)a0 withMediaURL:(id)a1 atVolume:(double)a2;
- (void)beginDuckingForTrackID:(id)a0 toDuckLevel:(double)a1 fadeDuration:(double)a2;
- (void)beginFadingForTrackID:(id)a0 fadeDuration:(double)a1;
- (void)couchPotatoPlaybackFinished;
- (void)endDuckingForTrackID:(id)a0;
- (void)endFadingForTrackID:(id)a0;
- (void)exportToImageForKeyPath:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1 andCompletionBlock:(id /* block */)a2;
- (void)exportToMovieAtPath:(id)a0 withOptions:(id)a1 andProgressBlock:(id /* block */)a2;
- (void)_addAudioTracks;
- (BOOL)_appendFrameToBufferAdaptor:(id)a0;
- (id)_imageFromRenderBufferWithSize:(struct CGSize { double x0; double x1; })a0;
- (int)_displayLinkCallback:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a0 outputTime:(const struct { unsigned int x0; int x1; long long x2; unsigned long long x3; double x4; long long x5; struct CVSMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x6; unsigned long long x7; unsigned long long x8; } *)a1;
- (void)_pauseLayer:(id)a0;
- (void)_reportProgressWithImage:(float)a0;
- (void)_resumeLayer:(id)a0;
- (void)exportToMovieAtPath:(id)a0 withProgressBlock:(id /* block */)a1;

@end
