@interface BWMovingWindowStats : BWMedianStats {
    int _dataPointIndex;
}

@property (readonly, nonatomic) int windowSize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)addDataPointP:(double)a0;
- (id)initWithWindowSize:(int)a0;

@end
