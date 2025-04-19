@class NSString, MTRMediaPlaybackClusterTrackAttributesStruct;

@interface MTRMediaPlaybackClusterTrackStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) MTRMediaPlaybackClusterTrackAttributesStruct *trackAttributes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
