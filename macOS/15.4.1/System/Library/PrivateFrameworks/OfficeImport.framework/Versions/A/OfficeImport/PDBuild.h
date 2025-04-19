@class OADDrawable;

@interface PDBuild : NSObject {
    BOOL mIsAnimateBackground;
    OADDrawable *mDrawable;
}

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)drawable;
- (BOOL)isAnimateBackground;
- (void)setDrawable:(id)a0;
- (void)setIsAnimateBackground:(BOOL)a0;

@end
