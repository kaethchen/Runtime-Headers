@interface CIMutableVector : NSObject

+ (void)initialize;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (double)Y;
- (double)X;
- (id)vector;
- (double)Z;
- (double)W;
- (void)setW:(double)a0;
- (void)setX:(double)a0;
- (void)setY:(double)a0;
- (void)setZ:(double)a0;
- (void)_setVectorX:(double)a0 Y:(double)a1 Z:(double)a2 W:(double)a3;
- (void)changeVector:(id)a0;

@end
