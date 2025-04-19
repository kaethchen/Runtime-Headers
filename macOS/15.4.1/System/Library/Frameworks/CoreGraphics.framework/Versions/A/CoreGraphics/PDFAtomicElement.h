@class CRNormalizedQuad, NSString, PDFCRGroupRegion;

@interface PDFAtomicElement : NSObject <PDFCTLDElement>

@property (weak, nonatomic) PDFCRGroupRegion *parent;
@property unsigned int type;
@property (readonly) unsigned long long layoutDirection;
@property (readonly) CRNormalizedQuad *boundingQuad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(unsigned int)a0 boundingBox:(id)a1 layoutDirection:(unsigned long long)a2;
- (void)setBoundingQuad:(id)a0;

@end
