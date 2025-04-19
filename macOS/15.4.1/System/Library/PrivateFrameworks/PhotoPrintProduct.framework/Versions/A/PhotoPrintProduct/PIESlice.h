@class NSDictionary, NSMutableArray, NSMutableSet;

@interface PIESlice : NSObject

@property (readonly) NSMutableArray *photosOrderedByWeight;
@property (readonly) NSDictionary *photoRelativeWeightMap;
@property (readonly) int type;
@property (readonly) NSMutableSet *keywords;
@property (retain) id userInfo;

- (void)dealloc;
- (id)description;
- (id)initAsType:(int)a0;
- (id)initAsType:(int)a0 withPhotos:(id)a1;

@end
