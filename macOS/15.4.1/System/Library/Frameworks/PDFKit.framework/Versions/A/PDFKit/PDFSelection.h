@class PDFDocument, NSArray, NSString, NSMutableArray, NSUUID, NSAttributedString, NSColor;

@interface PDFSelection : NSObject <NSCopying> {
    PDFDocument *_document;
    NSColor *_color;
    NSMutableArray *_pageRanges;
    BOOL _forceBreaks;
    struct __CFArray { } *_cgSelections;
    NSMutableArray *_pages;
    NSUUID *_pdfSelectionUUID;
}

@property (readonly, nonatomic) NSArray *pages;
@property (copy, nonatomic) NSColor *color;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSAttributedString *attributedString;

+ (id)defaultActiveColor;
+ (id)defaultInactiveColor;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (long long)compare:(id)a0;
- (id)document;
- (id)webArchive;
- (void)addSelection:(id)a0;
- (id)html;
- (id)initWithPage:(id)a0;
- (void)normalize;
- (id)firstPage;
- (id)lastPage;
- (id)initWithDocument:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForPage:(id)a0;
- (void)extendSelectionAtEnd:(long long)a0;
- (void)extendSelectionAtStart:(long long)a0;
- (struct CGPoint { double x0; double x1; })firstCharCenter;
- (id)rtfData;
- (void)enumerateRectsAndTransformsForPage:(id)a0 usingBlock:(id /* block */)a1;
- (id)htmlData;
- (unsigned long long)numberOfTextRangesOnPage:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0 onPage:(id)a1;
- (void)setForceBreaks:(BOOL)a0;
- (void)addCGSelection:(struct CGPDFSelection { } *)a0 forPage:(id)a1;
- (void)addSelectionCore:(id)a0 normalize:(BOOL)a1;
- (void)addSelectionNoNormalize:(id)a0;
- (void)addSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 page:(id)a1 normalize:(BOOL)a2;
- (void)addSelections:(id)a0;
- (id)asDestination;
- (id)attributedStringScaled:(double)a0;
- (id)boundsArrayForPage:(id)a0;
- (struct CGPDFSelection { } *)cgSelectionForPage:(id)a0;
- (id)cgSelectionPages;
- (struct __CFArray { } *)cgSelections;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 onPage:(id)a1;
- (id)createAttributedStringForCGSelection:(struct CGPDFSelection { } *)a0 scaled:(double)a1;
- (void)drawForPage:(id)a0 active:(BOOL)a1;
- (void)drawForPage:(id)a0 withBox:(long long)a1 active:(BOOL)a2;
- (void)drawForPage:(id)a0 withBox:(int)a1 active:(BOOL)a2 inContext:(struct CGContext { } *)a3;
- (void)extendSelectionForLineBoundaries;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstSpanBoundsForPage:(id)a0;
- (BOOL)forceBreaks;
- (unsigned long long)indexOfFirstCharacterOnPage:(id)a0;
- (unsigned long long)indexOfLastCharacterOnPage:(id)a0;
- (BOOL)isEqualToSelection:(id)a0;
- (BOOL)isStandaloneGraphic;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastSpanBoundsForPage:(id)a0;
- (struct CGPoint { double x0; double x1; })leftMostCharCenter;
- (unsigned long long)pdfKitIndexOfFirstCharacterOnPage:(id)a0;
- (unsigned long long)pdfKitIndexOfLastCharacterOnPage:(id)a0;
- (id)pdfSelectionUUID;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })previewRangeAtIndex:(unsigned long long)a0 onPage:(id)a1;
- (struct CGPoint { double x0; double x1; })rightMostCharCenter;
- (id)rtfdData;
- (id)selectionsByLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spanBoundsForPage:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;

@end
