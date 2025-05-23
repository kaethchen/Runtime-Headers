@interface _PXCuratedLibraryLayoutSkimmingSlideshowAnimationHelper : PXCuratedLibraryLayoutAnimationHelper {
    unsigned long long _userInterfaceDirection;
    struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } _fromIndexPath;
    struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } _toIndexPath;
}

- (id)initWithLayout:(id)a0;
- (long long)animationCurve;
- (double)animationDuration;
- (void)setUserData:(id)a0;
- (void)_adjustGeometries:(inout struct { struct { double x0; double x1; double x2; } x0; } *)a0 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a1 infos:(inout struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a2 spriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a3 appearing:(BOOL)a4;
- (BOOL)_shoulAnimateSpriteWithInfo:(const struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a0 matchingSectionIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a1 spriteKind:(out unsigned char *)a2;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(inout struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (void)animation:(id)a0 adjustGeometries:(inout struct { struct { double x0; double x1; double x2; } x0; } *)a1 styles:(inout struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a2 infos:(inout struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a3 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a4;
- (id)animation:(id)a0 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(id)a1 rootLayout:(id)a2 presentedGeometries:(const struct { struct { double x0; double x1; double x2; } x0; } *)a3 styles:(const struct { float x0; struct { union { struct { float x0; float x1; float x2; float x3; } x0; float x1[4]; } x0; } x1; float x2; float x3; float x4; float x5; unsigned short x6; unsigned char x7; float x8; struct { void /* unknown type, empty encoding */ x0[4]; } x9; } *)a4 infos:(const struct { unsigned char x0; unsigned char x1; float x2; long long x3; unsigned short x4; unsigned char x5; } *)a5;
- (BOOL)wantsDoubleSidedAnimations;

@end
