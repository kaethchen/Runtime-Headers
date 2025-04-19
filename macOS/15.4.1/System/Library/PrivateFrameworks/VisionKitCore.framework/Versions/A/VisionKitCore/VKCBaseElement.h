@class NSImage, NSString, CROutputRegion, VKQuad, CRDocumentOutputRegion, NSArray;

@interface VKCBaseElement : NSObject

@property (retain, nonatomic) VKQuad *quad;
@property (weak, nonatomic) VKCBaseElement *parent;
@property (retain, nonatomic) CROutputRegion *crOutputRegion;
@property (retain, nonatomic) CRDocumentOutputRegion *parentCRDocument;
@property (readonly, nonatomic) long long elementType;
@property (readonly, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageSpaceBoundingBox;
@property (readonly, nonatomic) unsigned long long confidence;
@property (readonly, nonatomic) NSArray *components;
@property (readonly, nonatomic) unsigned long long numberOfChildren;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) BOOL hasChildren;
@property (retain, nonatomic) NSImage *inspectableCellImage;
@property (readonly, nonatomic) BOOL isInspectableCellSelectable;

- (id)description;
- (void).cxx_destruct;
- (long long)type;
- (id)childAtIndex:(unsigned long long)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)loadInfoFromCROutputRegion:(id)a0;
- (id)recursiveSearchForCROutputRegion:(id)a0;

@end
