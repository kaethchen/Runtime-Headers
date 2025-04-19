@class EDResources, EDColorReference;

@interface EDBorder : NSObject {
    EDResources *mResources;
    int mType;
    EDColorReference *mColorReference;
    int mDiagonalType;
}

+ (id)borderWithType:(int)a0 color:(id)a1 resources:(id)a2;
+ (id)borderWithType:(int)a0 color:(id)a1 diagonalType:(int)a2 resources:(id)a3;
+ (id)borderWithType:(int)a0 colorReference:(id)a1 diagonalType:(int)a2 resources:(id)a3;
+ (id)borderWithType:(int)a0 colorReference:(id)a1 resources:(id)a2;
+ (id)borderWithType:(int)a0 resources:(id)a1;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setType:(int)a0;
- (int)type;
- (id)color;
- (id)initWithResources:(id)a0;
- (id)colorReference;
- (int)diagonalType;
- (BOOL)isEqualToBorder:(id)a0;
- (void)setDiagonalType:(int)a0;

@end
