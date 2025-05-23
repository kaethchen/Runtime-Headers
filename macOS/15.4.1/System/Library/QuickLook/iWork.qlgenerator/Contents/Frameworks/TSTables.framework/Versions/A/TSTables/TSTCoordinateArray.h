@class NSMutableIndexSet;

@interface TSTCoordinateArray : NSObject {
    unsigned int _offset;
    unsigned int _count;
    double *_coordinates;
    double _average;
    NSMutableIndexSet *_visibleIndices;
    BOOL _layoutDirectionIsLeftToRight;
    double _tableWidth;
}

- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCount:(unsigned int)a0 atOffset:(unsigned int)a1 layoutDirectionIsLeftToRight:(BOOL)a2;
- (void)setTableWidthForRightToLeft:(double)a0;

@end
