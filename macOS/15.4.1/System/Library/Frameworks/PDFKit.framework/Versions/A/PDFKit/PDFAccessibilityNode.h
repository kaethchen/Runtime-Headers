@class NSString, NSArray, PDFAccessibilityNodePrivate, PDFPage;
@protocol PDFAccessibilityNodeParent;

@interface PDFAccessibilityNode : NSAccessibilityElement <NSCopying, PDFAccessibilityNodeParent> {
    PDFAccessibilityNodePrivate *_private2;
}

@property (weak, nonatomic) PDFPage *page;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) struct CGPDFTaggedNode { } *nodeRef;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (retain, nonatomic) NSString *altText;
@property (readonly, weak, nonatomic) id<PDFAccessibilityNodeParent> parent;
@property (readonly, nonatomic) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createPDFAccessibilityRootNode:(id)a0;
+ (id)_accessibilityElementForNode:(id)a0;
+ (BOOL)_containsOnlyTextDescendant:(struct CGPDFTaggedNode { } *)a0;
+ (BOOL)_containsSomeTextContainerChilden:(struct CGPDFTaggedNode { } *)a0;
+ (BOOL)_containsSomeTextDescendant:(struct CGPDFTaggedNode { } *)a0;
+ (BOOL)_containsSomeTextWordNodes:(struct CGPDFTaggedNode { } *)a0;
+ (Class)_nodeClassForNode:(struct CGPDFTaggedNode { } *)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (id)document;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildren;
- (id)accessibilityChildrenInNavigationOrder;
- (id)accessibilityCustomRotors;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityLabel;
- (id)accessibilityParent;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRole;
- (id)accessibilitySelectedText;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilitySubrole;
- (BOOL)removeAnnotation:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })textRange;
- (void)removeChild:(id)a0;
- (void)print;
- (void)setParent:(id)a0;
- (id)layerController;
- (id)_findOverlappingChild:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 children:(id)a1;
- (void)scrollToVisible;
- (void)WKAccessibilityConvertPageBoundToScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 page:(id)a1 parent:(id)a2;
- (void)_annotate:(id)a0;
- (id)_descendantNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 reverseSearch:(BOOL)a2;
- (id)_documentContainer;
- (BOOL)_isSubFigure;
- (id)_nextNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)_nodeLanguage;
- (id)_previousNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_print:(id)a0 isTail:(BOOL)a1;
- (id)_sortedAnnotationNodesByTextRange;
- (id)accessibilityLanguage;
- (unsigned long long)areaOverlappingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)buildAccessibilityHierarchy;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToAccessibilitySpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)descendantNodeWithHash:(unsigned long long)a0;
- (id)descendantNodeWithNodeRef:(struct CGPDFTaggedNode { } *)a0;
- (id)firstVisibleNodeInPageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasEquivalentTextNodeRepresentation;
- (id)initWithParent:(id)a0 nodeRef:(struct CGPDFTaggedNode { } *)a1;
- (id)insertAnnotation:(id)a0 asType:(int)a1;
- (BOOL)isValidAccessibilityElement;
- (id)nextNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)pageContainerNode;
- (id)pageView;
- (id)previousNodeWithClass:(Class)a0 fromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)spokenDescription;
- (BOOL)supportsAppKitControls;

@end
