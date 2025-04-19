@class NSString, PDFAccessibilityNodeTableRowPrivate;

@interface PDFAccessibilityNodeTableRow : PDFAccessibilityNode <NSAccessibilityRow> {
    PDFAccessibilityNodeTableRowPrivate *_private3;
}

@property (readonly, nonatomic) long long index;
@property (nonatomic) BOOL isHeader;
@property (nonatomic) BOOL lackingTaggedRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)accessibilityIndex;
- (id)accessibilityRole;
- (void)addChildNodeRef:(struct CGPDFTaggedNode { } *)a0;
- (void)buildAccessibilityHierarchy;
- (id)cellForColumn:(unsigned long long)a0;
- (id)initWithParent:(id)a0 nodeRef:(struct CGPDFTaggedNode { } *)a1 index:(long long)a2;

@end
