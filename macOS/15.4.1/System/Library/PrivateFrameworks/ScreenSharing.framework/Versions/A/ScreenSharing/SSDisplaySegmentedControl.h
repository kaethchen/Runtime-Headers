@class NSArray, NSString, SSScreenInfo;

@interface SSDisplaySegmentedControl : NSSegmentedControl {
    NSArray *_screens;
}

@property struct CGColor { } *grayColor;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } globalScreenRect;
@property (copy) NSArray *screens;
@property id boundObjectForSelectedScreen;
@property (copy) NSString *boundKeyPathForSelectedScreen;
@property BOOL touchBarStyle;
@property (retain) SSScreenInfo *selectedScreen;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)unbind:(id)a0;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (BOOL)sendAction:(SEL)a0 to:(id)a1;
- (void)screenImageSize:(struct CGSize { double x0; double x1; } *)a0 andScaleFactor:(double *)a1;
- (id)getImageForMenuItemAtIndex:(unsigned long long)a0;
- (id)getImageForSegment:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 scaleFactor:(double)a2;
- (struct CGImage { } *)newImageForSegment:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1;
- (struct CGImage { } *)newImageForSegment:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1 scaleFactor:(double)a2;
- (double)scaleFactorForFixedSize:(struct CGSize { double x0; double x1; })a0;

@end
