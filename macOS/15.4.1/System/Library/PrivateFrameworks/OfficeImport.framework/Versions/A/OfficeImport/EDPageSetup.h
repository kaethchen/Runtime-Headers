@interface EDPageSetup : NSObject {
    int mOrientation;
    int mPageOrder;
    BOOL mCustomFirstPageNumber;
    unsigned long long mFirstPageNumber;
    unsigned long long mFitToHeight;
    unsigned long long mFitToWidth;
    unsigned long long mScale;
    float mLeftMargin;
    float mRightMargin;
    float mTopMargin;
    float mBottomMargin;
    float mHeaderMargin;
    float mFooterMargin;
}

+ (id)pageSetup;

- (id)description;
- (id)init;
- (void)setOrientation:(int)a0;
- (int)order;
- (unsigned long long)scale;
- (void)setScale:(unsigned long long)a0;
- (void)setRightMargin:(float)a0;
- (float)bottomMargin;
- (float)leftMargin;
- (int)orientation;
- (float)rightMargin;
- (void)setBottomMargin:(float)a0;
- (void)setLeftMargin:(float)a0;
- (void)setTopMargin:(float)a0;
- (float)topMargin;
- (void)setOrder:(int)a0;
- (void)setFitToHeight:(unsigned long long)a0;
- (unsigned long long)firstPageNumber;
- (BOOL)customFirstPageNumber;
- (unsigned long long)fitToHeight;
- (unsigned long long)fitToWidth;
- (float)footerMargin;
- (float)headerMargin;
- (void)setCustomFirstPageNumber:(BOOL)a0;
- (void)setFirstPageNumber:(unsigned long long)a0;
- (void)setFitToWidth:(unsigned long long)a0;
- (void)setFooterMargin:(float)a0;
- (void)setHeaderMargin:(float)a0;

@end
