@interface NSTMatrix : NSObject {
    long long fRows;
    long long fColumns;
    double **fValues;
}

+ (id)crossProduct:(id)a0 b:(id)a1;

- (void)dealloc;
- (id)invert;
- (void)addScaledRowToRow:(double)a0 a:(long long)a1 b:(long long)a2;
- (id)initWitRows:(long long)a0 columns:(long long)a1;
- (void)makeIdentity;
- (void)multiplyRowBy:(long long)a0 x:(double)a1;
- (void)resizeWithRows:(long long)a0 columns:(long long)a1;
- (void)setValue:(double)a0 atRow:(long long)a1 column:(long long)a2;
- (void)swapRows:(long long)a0 b:(long long)a1;
- (double)valueAtRow:(long long)a0 columns:(long long)a1;

@end
