@class NSString, SignpostFrameLifetimeInterval, NSMutableArray, NSNumber;

@interface SignpostRenderServerRenderInterval : SignpostAnimationSubInterval <SignpostOverrunChecking>

@property (weak, nonatomic) SignpostFrameLifetimeInterval *frameLifetime;
@property (retain, nonatomic) NSMutableArray *imageQueueSampleEvents;
@property (retain, nonatomic) NSMutableArray *clientDrawableIntervals;
@property (readonly, nonatomic) unsigned int frameSeed;
@property (readonly, nonatomic) unsigned long long displayRefreshIntervalMachContinuousTime;
@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic) BOOL hasOffScreenPassCount;
@property (readonly, nonatomic) unsigned int offScreenPassCount;
@property (readonly, nonatomic) BOOL didSkipRender;
@property (readonly, nonatomic) NSString *renderSkipReason;
@property (readonly, nonatomic) int renderServerPID;
@property (readonly, nonatomic) unsigned long long renderServerTID;
@property (readonly, nonatomic) NSNumber *synchronousMetalShaderCompileCount;
@property (readonly, nonatomic) NSNumber *cachingLayersRerenderCount;
@property (readonly, nonatomic) NSNumber *fallbackShaderDrawCount;
@property (readonly, nonatomic, getter=isPotentiallyLong) BOOL potentiallyLong;

- (void).cxx_destruct;
- (id)initWithInterval:(id)a0 frameSeed:(unsigned int)a1 renderSkipReason:(id)a2 refreshInterval:(unsigned long long)a3 displayID:(unsigned int)a4 passCount:(unsigned short)a5 compileCount:(unsigned char)a6 cacheMissCount:(unsigned char)a7 fallbackDrawCount:(unsigned char)a8;
- (id)initWithRenderServerRenderInterval:(id)a0;

@end
