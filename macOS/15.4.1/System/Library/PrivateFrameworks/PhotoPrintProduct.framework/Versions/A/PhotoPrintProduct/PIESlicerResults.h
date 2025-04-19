@class NSArray, PIESlicerParams, PIESector;

@interface PIESlicerResults : NSObject

@property (readonly) PIESlicerParams *slicerParams;
@property (readonly) NSArray *slices;
@property (readonly) PIESector *rootSector;

- (void)dealloc;
- (id)initWithRootSector:(id)a0 fromParams:(id)a1;
- (long long)placedPhotoCount;

@end
