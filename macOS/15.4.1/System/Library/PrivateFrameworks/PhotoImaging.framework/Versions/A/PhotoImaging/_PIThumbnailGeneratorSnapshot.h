@class NSArray, NUImageBufferRenderRequest, PIThumbnailGenerator, NUComposition, NSObject;
@protocol OS_dispatch_queue;

@interface _PIThumbnailGeneratorSnapshot : NSObject

@property (copy, nonatomic) NUComposition *composition;
@property (retain, nonatomic) NUImageBufferRenderRequest *request;
@property (copy, nonatomic) NSArray *thumbnailTimes;
@property (copy, nonatomic) NSArray *unadjustedThumbnails;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } referenceTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultQueue;
@property (copy, nonatomic) id /* block */ partialResultHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) _PIThumbnailGeneratorSnapshot *pendingSnapshot;
@property (weak, nonatomic) PIThumbnailGenerator *generator;

- (void).cxx_destruct;
- (id)initWithGenerator:(id)a0;

@end
