@interface CUIDesignLibrary : NSObject

+ (id)colorWithName:(long long)a0 designSystem:(long long)a1 palette:(long long)a2 colorScheme:(long long)a3 contrast:(long long)a4 styling:(long long)a5 displayGamut:(long long)a6 error:(id *)a7;
+ (id)colorWithName:(long long)a0 designSystem:(long long)a1 palette:(long long)a2 colorScheme:(long long)a3 contrast:(long long)a4 styling:(long long)a5 displayGamut:(long long)a6 hierarchyLevel:(long long)a7 error:(id *)a8;
+ (id)colorWithTraits2:(struct CUIDesignColorTraits2 { unsigned long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; })a0 error:(id *)a1;
+ (id)colorWithTraits:(struct CUIDesignColorTraits { long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; })a0 error:(id *)a1;
+ (struct CUIDesignColorTraits2 { unsigned long long x0; long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; })designColorTraitsWithName:(long long)a0 designSystem:(long long)a1 palette:(long long)a2 colorScheme:(long long)a3 contrast:(long long)a4 styling:(long long)a5 displayGamut:(long long)a6 hierarchyLevel:(long long)a7;

@end
