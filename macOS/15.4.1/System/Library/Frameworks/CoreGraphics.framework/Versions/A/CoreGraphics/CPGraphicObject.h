@class CPParagraph, CPTextLine, CPChunk;
@protocol CPGraphicUser;

@interface CPGraphicObject : CPChunk {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderedBounds;
    BOOL isInZoneBorder;
    int zoneGraphicType;
    CPTextLine *anchoringTextLine;
    CPChunk<CPGraphicUser> *user;
}

@property (nonatomic) unsigned int clipIndex;
@property (retain, nonatomic) CPParagraph *anchoringParagraph;

- (void)dealloc;
- (id)init;
- (void)setUser:(id)a0;
- (id)user;
- (BOOL)isVisible;
- (int)zoneGraphicType;
- (unsigned short)unicode;
- (id)anchoringTextLine;
- (BOOL)canBeContainer;
- (BOOL)isInZoneBorder;
- (BOOL)isIndivisible;
- (BOOL)isNarrow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedBounds;
- (void)setAnchoringTextLine:(id)a0;
- (void)setIsInZoneBorder:(BOOL)a0;
- (void)setZoneGraphicType:(int)a0;

@end
