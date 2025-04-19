@class NSNumber, MTRContentLauncherClusterTrackPreferenceStruct, NSArray;

@interface MTRContentLauncherClusterPlaybackPreferencesStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *playbackPosition;
@property (copy, nonatomic) MTRContentLauncherClusterTrackPreferenceStruct *textTrack;
@property (copy, nonatomic) NSArray *audioTracks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
