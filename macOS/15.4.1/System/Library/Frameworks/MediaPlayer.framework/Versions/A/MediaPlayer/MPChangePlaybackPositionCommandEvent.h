@class NSNumber;

@interface MPChangePlaybackPositionCommandEvent : MPRemoteCommandEvent

@property (readonly, nonatomic) NSNumber *referenceTime;
@property (readonly, nonatomic) double positionTime;

- (void).cxx_destruct;
- (id)initWithCommand:(id)a0 mediaRemoteType:(unsigned int)a1 options:(id)a2;

@end
