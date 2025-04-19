@class NSMutableIndexSet, CHDrawing;

@interface CHCornerDetector : NSObject {
    BOOL _shouldUseDynamicSampling;
    double _minimumSignificantSegmentLength;
    CHDrawing *_drawing;
    CHDrawing *_resampledDrawing;
    unsigned long long _directionChangeCount;
    unsigned long long _highestDirectionChangeCount;
    unsigned long long __strawSize;
    NSMutableIndexSet *__cornerIndexSet;
    NSMutableIndexSet *__directionChangeCornerIndexes;
    struct vector<std::map<long, long>, std::allocator<std::map<long, long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::map<long, long> *, std::allocator<std::map<long, long>>> { void *__value_; } __end_cap_; } __resampledDrawingPointMap;
}

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
