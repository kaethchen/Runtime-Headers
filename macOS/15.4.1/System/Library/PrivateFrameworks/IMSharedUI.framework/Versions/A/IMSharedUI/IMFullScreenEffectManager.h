@class IMFullScreenEffectPlayer, IMFullScreenEffect, NSString, NSMutableArray, IMScheduledUpdater;
@protocol IMFullScreenEffectManagerDelegate;

@interface IMFullScreenEffectManager : NSObject <IMFullScreenEffectPlayerDelegate>

@property (retain) IMFullScreenEffectPlayer *currentEffectPlayer;
@property (retain) NSMutableArray *effectQueue;
@property (retain) IMScheduledUpdater *triggerUpdater;
@property (weak) id<IMFullScreenEffectManagerDelegate> delegate;
@property (readonly) IMFullScreenEffect *currentEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)beginHoldingUpdatesForKey:(id)a0;
- (void)endHoldingUpdatesForKey:(id)a0;
- (void)triggerNextEffect;
- (void)queueFullScreenEffectPlayer:(id)a0 withRepeating:(BOOL)a1;
- (void)stopAllFullscreenEffectPlayers;
- (void)fullScreenEffectPlayerDidStart:(id)a0;
- (void)_stopCurrentFullscreenEffect:(BOOL)a0;
- (double)adjustedEffectDurationForTesting:(id)a0;
- (void)fullScreenEffectPlayerDidFinish:(id)a0;
- (void)fullScreenEffectPlayerDidPrepare:(id)a0;
- (BOOL)isFullScreenEffectQueued:(id)a0;
- (void)stopCurrentFullscreenEffectPlayer;
- (void)willStartFullScreenEffect:(id)a0;

@end
