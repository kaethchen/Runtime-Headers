@interface VUIPlaybackUtilities : NSObject

+ (double)playedThresholdTimeForDuration:(double)a0;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)a0 duration:(double)a1;
+ (BOOL)isDownloadLimitError:(id)a0;
+ (BOOL)isMPMediaLibraryAssociationError:(id)a0;
+ (BOOL)isOutOfSpaceError:(id)a0;
+ (long long)playedStateForDuration:(double)a0 elapsedTime:(double)a1 hasBeenPlayed:(BOOL)a2 playCount:(unsigned long long)a3;
+ (long long)playedStateForDuration:(double)a0 elapsedTime:(double)a1 hasBeenPlayed:(BOOL)a2 playCount:(unsigned long long)a3 respectPlayCount:(BOOL)a4;
+ (BOOL)playerIsLive:(id)a0;
+ (void)updateReportingForStartOfPreloadedPlayer:(id)a0;
+ (id)updatedHLSURL:(id)a0 forPlaybackContext:(unsigned long long)a1;

@end
