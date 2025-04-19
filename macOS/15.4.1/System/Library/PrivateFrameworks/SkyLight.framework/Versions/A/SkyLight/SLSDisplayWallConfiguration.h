@class NSNumber, NSArray;

@interface SLSDisplayWallConfiguration : NSObject

@property (copy, nonatomic) NSNumber *gridWidth;
@property (copy, nonatomic) NSNumber *gridHeight;
@property (copy, nonatomic) NSArray *displayIDs;

- (void)dealloc;
- (id)init;

@end
