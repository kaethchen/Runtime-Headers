@class NSMutableArray;

@interface AVCaptionGrouper : NSObject {
    NSMutableArray *_captionCollector;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _captionGroupStartTime;
}

- (void)dealloc;
- (id)init;
- (void)addCaption:(id)a0;
- (id)flushAddedCaptionsIntoGroupsUpToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
