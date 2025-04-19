@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {
    int mIndex;
    OADColor *mColor;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)index;
- (void)setIndex:(int)a0;
- (id)color;
- (void)setColor:(id)a0;
- (void)applyToParagraphProperties:(id)a0;

@end
