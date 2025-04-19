@class NSString, NSNumber;

@interface MPCPodcastPlaybackPositionEvent : NSObject

@property (retain, nonatomic) NSString *podcastAdamID;
@property (retain, nonatomic) NSString *episodeAdamID;
@property (retain, nonatomic) NSString *episodeUUID;
@property (retain, nonatomic) NSString *feedURL;
@property (retain, nonatomic) NSNumber *accountID;
@property (nonatomic) double timestamp;
@property (nonatomic) double duration;
@property (nonatomic) double position;
@property (nonatomic) BOOL subscribable;
@property (nonatomic) BOOL completed;

- (void).cxx_destruct;

@end
