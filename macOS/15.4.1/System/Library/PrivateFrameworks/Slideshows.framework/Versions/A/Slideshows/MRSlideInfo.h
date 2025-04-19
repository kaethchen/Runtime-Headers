@class NSString;

@interface MRSlideInfo : NSObject

@property (copy, nonatomic) NSString *assetPath;
@property (nonatomic) unsigned long long index;
@property (nonatomic) double aspectRatio;
@property (nonatomic) double time;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) double scale;
@property (nonatomic) double rotation;
@property (nonatomic) id player;
@property (nonatomic) BOOL isMain;

- (void)dealloc;
- (id)description;

@end
