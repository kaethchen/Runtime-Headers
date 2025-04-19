@class NSOperationQueue, MRRenderer, NSDictionary;

@interface MRRenderArguments : NSObject

@property (retain) NSOperationQueue *preloadQueue;
@property double unalteredTime;
@property struct { unsigned int version; int videoTimeScale; long long videoTime; unsigned long long hostTime; double rateScalar; long long videoRefreshPeriod; struct CVSMPTETime { short subframes; short subframeDivisor; unsigned int counter; unsigned int type; unsigned int flags; short hours; short minutes; short seconds; short frames; } smpteTime; unsigned long long flags; unsigned long long reserved; } displayLinkTimestamp;
@property double morphingProgress;
@property int thumbnailPolicy;
@property unsigned char currentLayoutIndex;
@property BOOL freezesSizeOfImageRequests;
@property BOOL timeWasSet;
@property (readonly, retain) MRRenderer *renderer;
@property (retain) NSDictionary *forcedState;
@property (readonly) BOOL isPreloading;
@property (nonatomic) BOOL skipsAnimations;

- (void)dealloc;
- (void)cleanup;
- (id)initWithRenderer:(id)a0;
- (id)copyForPreloading;

@end
