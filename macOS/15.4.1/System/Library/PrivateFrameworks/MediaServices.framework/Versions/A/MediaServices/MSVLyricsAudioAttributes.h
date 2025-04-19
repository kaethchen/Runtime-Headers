@class NSString;

@interface MSVLyricsAudioAttributes : NSObject

@property (nonatomic) double lyricsOffset;
@property (copy, nonatomic) NSString *role;
@property (nonatomic, getter=isSpatialRole) BOOL spatialRole;

- (void).cxx_destruct;

@end
