@class NSMapTable;

@interface VUIPlaybackReporterVPAF : VUIPlaybackReporter {
    NSMapTable *_pendingPlayerProperties;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_endSession:(id)a0;
- (void)flushUnreportedEvents;
- (id)_sensitiveContentInfoForPlayer:(id)a0;
- (id)_connectionInfo;
- (void)_reportForSession:(id)a0 state:(id)a1 reason:(id)a2;
- (id)_audioFormatForPlayer:(id)a0 session:(id)a1;
- (id)_audioInfoForPlayer:(id)a0;
- (unsigned long long)_capPlayHeadIfNeeded:(unsigned long long)a0 forSession:(id)a1;
- (void)_catchUpToLiveDidBegin:(id)a0;
- (void)_catchUpToLiveDidEnd:(id)a0;
- (void)_catchUpToLiveItemDidChange:(id)a0;
- (void)_catchUpToLiveItemWillChange:(id)a0;
- (id)_colorRangeForPlayer:(id)a0;
- (void)_createPlaybackDatePollingTimerForLiveStream:(id)a0;
- (id)_createSessionForPlayer:(id)a0;
- (id)_downloadInfoForPlayer:(id)a0;
- (void)_flushUnreportedEventsAfterDelay:(double)a0;
- (id)_focusInfoForSession:(id)a0;
- (void)_handleBgMCEmbeddedPlayerVCTransferredToFullScreenControllerNotification:(id)a0;
- (void)_handleMediaControllerNotification:(id)a0;
- (void)_invalidatePlaybackDatePollingTimerForLiveStream:(id)a0;
- (void)_liveSportsPostPlayAutoPlayWillStart:(id)a0;
- (void)_mediaControllerDidPlayToEnd:(id)a0;
- (id)_metricsForPlayer:(id)a0 session:(id)a1;
- (id)_metricsForSession:(id)a0;
- (id)_playHeadDescriptionForTimeInMS:(unsigned long long)a0 playbackDate:(id)a1;
- (void)_playerCurrentMediaItemWillSeek:(id)a0;
- (void)_reportSeekStopAtTimeInMS:(unsigned long long)a0 playbackDate:(id)a1 session:(id)a2 tracker:(id)a3 player:(id)a4;
- (id)_screenInfo;
- (void)_setSessionMetadataValue:(id)a0 forKey:(id)a1 player:(id)a2;
- (id)_skipIntroActionForSession:(id)a0 consume:(BOOL)a1;
- (id)_subtitleInfoForPlayer:(id)a0;
- (id)_trackerWithBaseEventDataForSession:(id)a0;
- (id)_videoDisplayInfoForSession:(id)a0;
- (BOOL)enforceSinglePlaybackSession;

@end
