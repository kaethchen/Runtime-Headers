@class MTMetricsData, MTMediaActivityEventHandler, MTPAFPlaylistItem, MTPAFPlaylist;

@interface MTPAFItemActivity : NSObject

@property (retain) MTPAFPlaylistItem *item;
@property (retain) MTPAFPlaylist *playlist;
@property (retain) MTMediaActivityEventHandler *startEventHandler;
@property (retain) MTMediaActivityEventHandler *stopEventHandler;
@property (retain) MTMetricsData *startMetricsData;
@property (retain) MTMetricsData *stopMetricsData;

- (void).cxx_destruct;
- (void)populatePlaylistAndItemData:(id)a0;
- (void)startAtOverallPosition:(unsigned long long)a0 triggerType:(id)a1 reason:(id)a2 eventData:(id)a3;
- (void)stopAtOverallPosition:(unsigned long long)a0 triggerType:(id)a1 reason:(id)a2 eventData:(id)a3;

@end
