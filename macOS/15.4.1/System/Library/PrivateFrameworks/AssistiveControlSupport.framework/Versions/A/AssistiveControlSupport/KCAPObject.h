@class NSData;

@interface KCAPObject : NSObject

@property (retain) NSData *kcapData;
@property (nonatomic) short kcapID;
@property (nonatomic) const struct KCAPHeader { struct Rect { short x0; short x1; short x2; short x3; } x0; struct Rect { short x0; short x1; short x2; short x3; } x1; short x2; struct MainKCAPArray { short x0; struct Point { short x0; short x1; } x1[0]; } x3[0]; } *kcapHeaderPtr;
@property (nonatomic) const short *kcapShapeAndKeyDataPtr;

- (id)init;
- (void).cxx_destruct;
- (short)mainArrayLength;
- (struct Rect { short x0; short x1; short x2; short x3; })boundsRect;
- (BOOL)loadNewKCAPResource:(short)a0;
- (short)shapeAndKeyDataForIndex:(int)a0;

@end
