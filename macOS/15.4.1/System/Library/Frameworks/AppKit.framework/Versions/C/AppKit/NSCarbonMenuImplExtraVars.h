@class NSAppearance;

@interface NSCarbonMenuImplExtraVars : NSObject {
    id customHandlerList;
    struct SLMPopUpMenuContext_t { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; unsigned long long x8; unsigned long long x9; struct __CTFont *x10; struct CGPoint { double x0; double x1; } x11; double x12; unsigned long long x13; unsigned int x14; id x15; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x16; struct CGSize { double x0; double x1; } x17; unsigned long long x18; id x19; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x20; unsigned long long x21; id x22; id x23; id x24; struct OpaqueMenuRef *x25; struct Point { short x0; short x1; } x26; BOOL x27; struct Rect { short x0; short x1; short x2; short x3; } x28; struct Rect { short x0; short x1; short x2; short x3; } x29; BOOL x30; unsigned int x31; BOOL x32; BOOL x33; BOOL x34; BOOL x35; BOOL x36; BOOL x37; } *popUpContext;
    NSAppearance *menuAppearance;
}

- (void)dealloc;

@end
