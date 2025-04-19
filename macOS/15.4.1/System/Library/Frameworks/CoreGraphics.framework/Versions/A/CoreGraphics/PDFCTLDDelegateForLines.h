@class NSString;

@interface PDFCTLDDelegateForLines : NSObject <CRCTLDDelegate> {
    void *_layout;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _quadToPageTransform;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)groupingConstraintForRegion1:(id)a0 region2:(id)a1;
- (id)initWithPageLayout:(void *)a0 quadToPageTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;

@end
