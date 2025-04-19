@class NSString, NSMapTable;

@interface QLSeamlessOpeningFakeCloserDelegate : NSObject <QLSeamlessCloserDelegate> {
    NSMapTable *_mapTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)closerDelegate;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })seamlessCloserSourceFrameOnScreenForPreviewItem:(id)a0;
- (id)seamlessCloserSourcePreviewViewForPreviewItem:(id)a0;
- (id)infoForPreviewItem:(id)a0;
- (void)registerInfo:(id)a0 forPreviewItem:(id)a1;
- (id)seamlessCloserTransitionImageForPreviewItem:(id)a0 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 windowLevel:(long long *)a2;

@end
