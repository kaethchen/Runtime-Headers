@class NSArray, NSMutableArray;

@interface QLOverlayMultiButtonLayer : QLOverlayBaseButtonLayer {
    NSMutableArray *_imageLayers;
}

@property (readonly) unsigned long long clickedIndex;
@property (retain) NSArray *images;
@property BOOL leftEnabled;
@property BOOL rightEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)_beginMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_enableClickAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)_enabledAtIndex:(unsigned long long)a0;
- (void)_endMouseDownAtPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setEnabled:(BOOL)a0 atIndex:(unsigned long long)a1;

@end
