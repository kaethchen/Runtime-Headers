@interface IPAColorSyncUtil : NSObject

+ (id)checksumForColorSpace:(struct CGColorSpace { } *)a0;
+ (struct CGColorSpace { } *)newCanonicalColorSpace:(struct CGColorSpace { } *)a0;
+ (struct ColorSyncProfile { } *)newColorSyncProfileFromCGColorSpace:(struct CGColorSpace { } *)a0;
+ (struct CGColorSpace { } *)newLinearizedColorSpace:(struct CGColorSpace { } *)a0;
+ (BOOL)parseHeaderForColorSyncProfile:(struct ColorSyncProfile { } *)a0 outProfileClass:(id *)a1 outColorSpaceType:(id *)a2 outPCS:(id *)a3;
+ (void)replaceProfile:(struct ColorSyncProfile { } *)a0 name:(const char *)a1;

@end
