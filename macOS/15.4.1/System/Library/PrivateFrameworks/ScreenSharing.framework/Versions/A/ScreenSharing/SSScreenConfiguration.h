@class NSArray, SSScreenInfo;

@interface SSScreenConfiguration : NSObject <NSCopying>

@property struct SSRect { struct SSPoint { long long x; long long y; } origin; struct SSSize { unsigned long long width; unsigned long long height; } size; } scaledSelectedScreenRect;
@property (retain) SSScreenInfo *globalScreen;
@property (copy) NSArray *screens;
@property BOOL globalIsMixedMode;
@property BOOL isDisplayInfo2;
@property BOOL isVNC;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)screenConfiguration;
- (id)screenWithID:(unsigned long long)a0;

@end
