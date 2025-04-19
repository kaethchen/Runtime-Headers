@class NSArray, NSMutableArray, PIESlice;

@interface PIESector : NSObject {
    PIESlice *_slice;
}

@property (readonly) NSArray *slices;
@property (readonly) NSMutableArray *subsectors;
@property (readonly) unsigned long long sliceCount;

- (void)dealloc;
- (id)init;
- (id)allSlicePhotos;
- (id)initWithSlice:(id)a0;
- (unsigned long long)totalHoleCount;

@end
