@class NSArray, NSDictionary, AVWeakReference, AVVideoCompositionRenderContext;
@protocol AVVideoCompositionInstruction;

@interface AVAsynchronousVideoCompositionRequestInternal : NSObject

@property (retain, nonatomic) AVWeakReference *session;
@property (retain, nonatomic) AVVideoCompositionRenderContext *renderContext;
@property (nonatomic) struct OpaqueFigVideoCompositorFrame { } *compositionFrame;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } compositionTime;
@property (retain, nonatomic) NSDictionary *sourceVideoFrameTimedSamplesByTrackID;
@property (retain, nonatomic) NSArray *sourceTrackIDsInClientOrder;
@property (retain, nonatomic) NSDictionary *sourceSampleBufferTimedSamplesByTrackID;
@property (retain, nonatomic) NSArray *sourceSampleBufferTrackIDsInClientOrder;
@property (retain, nonatomic) id<AVVideoCompositionInstruction> instruction;
@property (nonatomic) BOOL isFinished;

- (void)dealloc;

@end
