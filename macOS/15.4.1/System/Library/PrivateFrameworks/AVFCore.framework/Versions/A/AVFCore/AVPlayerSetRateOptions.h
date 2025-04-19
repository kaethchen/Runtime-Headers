@interface AVPlayerSetRateOptions : NSObject <NSCopying>

@property (nonatomic) BOOL preferCoordinatedPlaybackBehavior;
@property (nonatomic) BOOL overrideAutowaitRestriction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
