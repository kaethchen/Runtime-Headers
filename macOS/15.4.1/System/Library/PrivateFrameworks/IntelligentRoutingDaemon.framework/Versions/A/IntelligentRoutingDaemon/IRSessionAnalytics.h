@class NSObject, IRCandidateDO, IRMiloLslPredictionDO, IREventDO, IRServiceDO, IRTimer;
@protocol OS_dispatch_queue;

@interface IRSessionAnalytics : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IRServiceDO *service;
@property (retain, nonatomic) IRTimer *timer;
@property (retain, nonatomic) IREventDO *bannerEvent;
@property (retain, nonatomic) IRCandidateDO *bannerCandidate;
@property (retain, nonatomic) IRMiloLslPredictionDO *bannerMiLoPrediction;
@property (retain, nonatomic) IRCandidateDO *chosenCandidate;
@property (retain, nonatomic) IREventDO *playbackStartEvent;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)_handleBannerEvent:(id)a0 withCandidate:(id)a1 WithMiLoPrediction:(id)a2 systemState:(id)a3;
- (void)_handleNonBannerEvent:(id)a0 forCandidate:(id)a1 forceStopSession:(BOOL)a2;
- (void)_handleSessionTimeout;
- (BOOL)_isSessionOngoing;
- (void)_stopSessionAndSendCA:(unsigned long long)a0;
- (void)contextChangedWithReason:(id)a0 systemState:(id)a1;
- (void)event:(id)a0 forCandidate:(id)a1 miloPrediction:(id)a2 systemState:(id)a3;
- (id)initWithQueue:(id)a0 service:(id)a1;

@end
