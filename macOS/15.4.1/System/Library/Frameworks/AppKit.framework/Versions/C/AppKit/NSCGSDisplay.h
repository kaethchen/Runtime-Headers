@class NSUUID;

@interface NSCGSDisplay : NSObject

@property (readonly) int displayID;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (readonly) unsigned int depth;
@property (readonly) double backingPixelsPerPoint;
@property (readonly) struct CGSize { double width; double height; } devicePixelCounts;
@property (readonly) double maxHDRValue;
@property (readonly) double maxPotentialHDRValue;
@property (readonly) double maxReferenceHDRValue;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } notchFrame;
@property (readonly) double revealedMenuBarHeight;
@property (readonly, copy) NSUUID *UUID;
@property (readonly) struct CGColorSpace { } *colorSpace;
@property (readonly) unsigned long long capabilities;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayID:(int)a0 flipOffset:(double)a1;

@end
