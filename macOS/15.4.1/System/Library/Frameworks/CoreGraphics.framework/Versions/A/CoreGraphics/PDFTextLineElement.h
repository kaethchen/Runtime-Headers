@interface PDFTextLineElement : PDFAtomicElement

@property struct TextLine { struct { long long location; long long length; } textRange; unsigned long long uniCharStart; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bbox; double rotation; unsigned long long identifier; } textLine;

- (id).cxx_construct;
- (id)initWithTextLine:(struct TextLine { struct { long long x0; long long x1; } x0; unsigned long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; double x3; unsigned long long x4; })a0 boundingBox:(id)a1;

@end
