@class NSArray, NSIndexSet, NSMutableArray;

@interface MRShiftingTilesTimingInfo : NSObject {
    BOOL fallLeft;
    long long fallDirection;
    BOOL isTop;
    long long add;
    long long slideIndex;
    double duration;
}

@property (retain, nonatomic) NSArray *layouts;
@property (retain, nonatomic) NSIndexSet *remove;
@property (retain, nonatomic) NSMutableArray *additionalTimingInfo;

- (void)dealloc;
- (id)description;

@end
