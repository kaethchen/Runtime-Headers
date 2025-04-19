@class NSNumber, NSData, MTRMediaPlaybackClusterPlaybackPositionStruct;

@interface MTRMediaPlaybackClusterStateChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *currentState;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) MTRMediaPlaybackClusterPlaybackPositionStruct *sampledPosition;
@property (copy, nonatomic) NSNumber *playbackSpeed;
@property (copy, nonatomic) NSNumber *seekRangeEnd;
@property (copy, nonatomic) NSNumber *seekRangeStart;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSNumber *audioAdvanceUnmuted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
