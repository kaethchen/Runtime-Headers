@class NSString;

@interface CPFont : NSObject <CPDisposable> {
    struct CGPDFFont { } *cgPDFFont;
    struct CGFont { } *cgFont;
    NSString *fontName;
    BOOL exactMatch;
    struct { double fontStretch; double fontWeight; unsigned int flags; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } fontBBox; double italicAngle; double ascent; double descent; double leading; double capHeight; double xHeight; double stemV; double stemH; double avgWidth; double maxWidth; double missingWidth; double spaceWidth; double underlinePosition; double underlineThickness; } descriptor;
    struct __CFDictionary { } *kernDictionary;
    double kernUnitsPerEm;
    BOOL isHorizontal;
    double defaultWidth;
    BOOL disposed;
}

- (void)dealloc;
- (void)finalize;
- (unsigned int)flags;
- (id)initWith:(struct CGPDFDictionary { } *)a0;
- (double)leading;
- (void)dispose;
- (double)capHeight;
- (id)fontName;
- (BOOL)isHorizontal;
- (double)maxWidth;
- (double)xHeight;
- (double)italicAngle;
- (double)underlinePosition;
- (double)underlineThickness;
- (double)descent;
- (double)ascent;
- (double)avgWidth;
- (struct CGFont { } *)cgFont;
- (struct CGPDFFont { } *)cgPDFFont;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fontBBox;
- (double)fontStretch;
- (double)fontWeight;
- (void)getFontName;
- (BOOL)getGlyphs:(unsigned short *)a0 forCodes:(const unsigned short *)a1 count:(unsigned int)a2;
- (BOOL)isSameFontAs:(id)a0;
- (double)kernBetweenUnicode:(unsigned short)a0 andUnicode:(unsigned short)a1;
- (void)loadEmbeddedFontInfo;
- (void)loadExternalFontInfoFor:(id)a0;
- (id)matchingFontName;
- (double)missingWidth;
- (double)spaceWidth;
- (double)stemH;
- (double)stemV;
- (void)uniCharsFor:(unsigned long long)a0 count:(unsigned long long *)a1 toArray:(unsigned short *)a2 maxChars:(unsigned int)a3;

@end
