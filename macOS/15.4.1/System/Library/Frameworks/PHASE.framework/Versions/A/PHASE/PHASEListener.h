@interface PHASEListener : PHASEObject

@property (nonatomic) double dopplerFactor;
@property (nonatomic) void /* unknown type, empty encoding */ velocity;
@property (nonatomic) double gain;
@property (nonatomic) unsigned long long automaticHeadTrackingFlags;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)initWithEngine:(id)a0;
- (id)initWithEngine:(id)a0 entityType:(unsigned int)a1;

@end
