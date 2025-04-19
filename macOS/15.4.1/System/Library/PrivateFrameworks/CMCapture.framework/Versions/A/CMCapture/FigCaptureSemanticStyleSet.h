@class NSArray, NSString;

@interface FigCaptureSemanticStyleSet : NSObject <FigXPCCoding, NSCopying> {
    NSArray *_semanticStyles;
    NSArray *_regions;
}

@property (readonly, nonatomic) NSArray *semanticStyles;
@property (readonly, nonatomic) NSArray *regions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)semanticStyleSetWithSemanticStyles:(id)a0 regions:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })regionAtIndex:(unsigned long long)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (float)largestEdgeOffset;
- (id)largestRegionSemanticStyle;
- (float)leftmostRegionStartXOffset;

@end
