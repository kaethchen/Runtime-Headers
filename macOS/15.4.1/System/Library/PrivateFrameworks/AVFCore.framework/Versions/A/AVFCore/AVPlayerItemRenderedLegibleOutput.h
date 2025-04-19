@class AVWeakReferencingDelegateStorage, AVWeakReference, NSObject;
@protocol OS_dispatch_queue, AVPlayerItemRenderedLegibleOutputDependencyFactory, AVPlayerItemRenderedLegibleOutputPushDelegate;

@interface AVPlayerItemRenderedLegibleOutput : AVPlayerItemOutput {
    id<AVPlayerItemRenderedLegibleOutputDependencyFactory> _dependencyFactory;
    AVWeakReferencingDelegateStorage *_delegateStorage;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    AVWeakReference *_weakReferenceToHost;
    BOOL _suppressesPlayerRendering;
    double _advanceInterval;
    struct CGSize { double width; double height; } _videoDisplaySize;
}

@property (readonly, weak, nonatomic) id<AVPlayerItemRenderedLegibleOutputPushDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic) double advanceIntervalForDelegateInvocation;
@property (nonatomic) struct CGSize { double x0; double x1; } videoDisplaySize;

+ (void)initialize;

- (void)dealloc;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (BOOL)_attachToPlayerItem:(id)a0;
- (void)_collectUncollectables;
- (void)_detachFromPlayerItem;
- (id)_figRenderedLegibleOutputsDictionaryOptions;
- (void)_pushRenderedCaptionImages:(id)a0 atItemTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)_signalFlush;
- (id)initWithDependencyFactory:(id)a0 videoDisplaySize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithVideoDisplaySize:(struct CGSize { double x0; double x1; })a0;
- (void)setSuppressesPlayerRendering:(BOOL)a0;
- (BOOL)suppressesPlayerRendering;

@end
