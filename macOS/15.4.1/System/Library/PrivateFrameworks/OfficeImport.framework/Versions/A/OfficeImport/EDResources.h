@class EDCollection, EDContentFormatsCollection, EDFontsCollection, EDColorsCollection, EDLinksCollection, EDTableStylesCollection, EDStylesCollection;

@interface EDResources : NSObject {
    EDCollection *mStrings;
    EDContentFormatsCollection *mContentFormats;
    EDFontsCollection *mFonts;
    EDCollection *mAlignmentInfos;
    EDStylesCollection *mStyles;
    EDColorsCollection *mColors;
    EDColorsCollection *mThemes;
    EDCollection *mNames;
    EDLinksCollection *mLinks;
    EDCollection *mBorders;
    EDCollection *mBorder;
    EDCollection *mFills;
    EDCollection *mDifferentialStyles;
    EDTableStylesCollection *mTableStyles;
}

- (id)description;
- (void).cxx_destruct;
- (id)colors;
- (id)links;
- (void)setColors:(id)a0;
- (id)styles;
- (id)names;
- (id)strings;
- (id)fonts;
- (id)border;
- (id)borders;
- (id)alignmentInfos;
- (id)contentFormats;
- (id)differentialStyles;
- (id)fills;
- (id)initWithStringOptimization:(BOOL)a0;
- (void)setThemes:(id)a0;
- (id)tableStyles;
- (id)themes;

@end
