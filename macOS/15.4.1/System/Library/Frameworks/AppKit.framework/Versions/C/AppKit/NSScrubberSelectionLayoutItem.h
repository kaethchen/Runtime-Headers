@class NSString;

@interface NSScrubberSelectionLayoutItem : NSObject <NSScrubberSelectionLayout>

@property BOOL floatingSelection;
@property long long itemAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectionLayoutAttributesForItemAtIndex:(long long)a0 withState:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; long long x1; long long x2; double x3; long long x4; long long x5; struct CGPoint { double x0; double x1; } x6; BOOL x7; })a1 inLayout:(id)a2 presentationItemAttributes:(id)a3 inView:(id)a4;
- (id)selectionLayoutAttributesForState:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; long long x1; long long x2; double x3; long long x4; long long x5; struct CGPoint { double x0; double x1; } x6; BOOL x7; })a0 inLayout:(id)a1 presentationItemAttributes:(id)a2 inView:(id)a3;

@end
