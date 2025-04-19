@class NSArray;

@interface CADisplayWallConfiguration : NSObject

@property unsigned int gridWidth;
@property unsigned int gridHeight;
@property (copy, nonatomic) NSArray *displays;

- (void)dealloc;

@end
