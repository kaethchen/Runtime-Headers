@interface SSScreenInfo : NSObject <NSCopying>

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationFrame;
@property struct SSRect { struct SSPoint { long long x; long long y; } origin; struct SSSize { unsigned long long width; unsigned long long height; } size; } scaledFrame;
@property unsigned long long identifier;
@property unsigned long long index;
@property unsigned long long flags;
@property BOOL isGlobalScreen;
@property double UIResolution;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)formattedDescription;
- (id)screenInfo;

@end
