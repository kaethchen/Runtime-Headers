@class OADColor;

@interface OADStyleMatrixReference : NSObject <NSCopying> {
    unsigned long long mMatrixIndex;
    OADColor *mColor;
}

+ (id)styleMatrixReferenceWithMatrixIndex:(unsigned long long)a0 color:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)color;
- (void)setColor:(id)a0;
- (void)setMatrixIndex:(unsigned long long)a0;
- (id)initWithMatrixIndex:(unsigned long long)a0 color:(id)a1;
- (unsigned long long)matrixIndex;

@end
