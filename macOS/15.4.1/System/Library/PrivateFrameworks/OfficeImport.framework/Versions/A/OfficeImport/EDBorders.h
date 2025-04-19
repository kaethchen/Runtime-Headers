@class EDResources;

@interface EDBorders : NSObject <NSCopying> {
    EDResources *mResources;
    unsigned long long mLeftBorderIndex;
    unsigned long long mRightBorderIndex;
    unsigned long long mTopBorderIndex;
    unsigned long long mBottomBorderIndex;
    unsigned long long mDiagonalBorderIndex;
    unsigned long long mVerticalBorderIndex;
    unsigned long long mHorizontalBorderIndex;
}

+ (id)bordersWithLeft:(id)a0 right:(id)a1 top:(id)a2 bottom:(id)a3 diagonal:(id)a4 resources:(id)a5;
+ (id)bordersWithLeft:(id)a0 right:(id)a1 top:(id)a2 bottom:(id)a3 diagonal:(id)a4 vertical:(id)a5 horizontal:(id)a6 resources:(id)a7;
+ (id)bordersWithResources:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithResources:(id)a0;
- (id)bottomBorder;
- (void)setBottomBorder:(id)a0;
- (void)setTopBorder:(id)a0;
- (id)topBorder;
- (void)setRightBorder:(id)a0;
- (id)diagonalBorder;
- (id)horizontalBorder;
- (BOOL)isEqualToBorders:(id)a0;
- (id)leftBorder;
- (id)rightBorder;
- (void)setDiagonalBorder:(id)a0;
- (void)setHorizontalBorder:(id)a0;
- (void)setLeftBorder:(id)a0;
- (void)setVerticalBorder:(id)a0;
- (id)verticalBorder;

@end
