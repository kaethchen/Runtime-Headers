@class NSArray, CRNormalizedQuad, NSString, NSMutableArray;

@interface PDFCRGroupRegion : NSObject <PDFCTLDElement>

@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) NSArray *subregions;
@property (weak) PDFCRGroupRegion *parent;
@property (retain, nonatomic) NSMutableArray *children;
@property unsigned int type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)insertChildren:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeChild:(id)a0;
- (id)initWithBoundingQuad:(id)a0 layoutDirection:(unsigned long long)a1 subregions:(id)a2 parent:(id)a3;
- (void)removeSubregion:(id)a0;

@end
