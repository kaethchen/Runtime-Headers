@interface LUI2Screen : NSObject

@property (readonly) int displayID;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) double longSide;
@property (readonly) double shortSide;

+ (id)screens;
+ (id)mainScreen;
+ (id)screenForWindow:(id)a0;

- (id)description;
- (id)initWithDisplayID:(unsigned int)a0;
- (id)_uuidString;

@end
