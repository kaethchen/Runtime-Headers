@class NSString, NSObject;
@protocol OS_dispatch_queue, AMPMPPlayerClientEventsProtocol;

@interface AMPMPPlayerClientEventsXPCObject : NSObject <AMPMPPlayerControllerSystemAndAppServer>

@property (weak, nonatomic) id<AMPMPPlayerClientEventsProtocol> eventsDelegate;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (void)play;
- (void)setShuffleMode:(long long)a0;
- (void)setRepeatMode:(long long)a0;
- (void)endSeek;
- (void)appendDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)beginSeekWithDirection:(long long)a0;
- (void)getDescriptorWithReply:(id /* block */)a0;
- (void)getImageForArtworkIdentifier:(id)a0 itemIdentifier:(id)a1 atSize:(struct CGSize { double x0; double x1; })a2 reply:(id /* block */)a3;
- (void)getNowPlayingAtIndex:(long long)a0 reply:(id /* block */)a1;
- (void)getNowPlayingWithReply:(id /* block */)a0;
- (void)getRepeatModeWithReply:(id /* block */)a0;
- (void)getShuffleModeWithReply:(id /* block */)a0;
- (void)getTimeSnapshotWithReply:(id /* block */)a0;
- (void)pauseWithFadeDuration:(long long)a0;
- (void)performQueueModifications:(id)a0 completion:(id /* block */)a1;
- (void)prependDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)reshuffle;
- (void)setDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)setElapsedTime:(double)a0 completion:(id /* block */)a1;
- (void)setNowPlayingItem:(id)a0 itemIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)setPlaybackRate:(float)a0 completion:(id /* block */)a1;
- (void)setUserQueueModificationsDisabled:(BOOL)a0;
- (void)skipWithBehavior:(long long)a0;
- (void)withClientQueue:(id /* block */)a0;
- (void)getPlaybackStateWithReply:(id /* block */)a0;
- (void)getUserQueueModificationsDisabledWithReply:(id /* block */)a0;

@end
