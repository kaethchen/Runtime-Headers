@interface PDFListItemElement : PDFAtomicElement

@property struct vector<PageLayout::TextLine, std::allocator<PageLayout::TextLine>> { struct TextLine *__begin_; struct TextLine *__end_; struct __compressed_pair<PageLayout::TextLine *, std::allocator<PageLayout::TextLine>> { struct TextLine *__value_; } __end_cap_; } textLines;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithTextLines:(const void *)a0 boundingBox:(id)a1;

@end
