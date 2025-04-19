@class NSArray;

@interface _NSSidecarIVars : NSObject

@property unsigned long long tapCount;
@property struct CGPoint { double x; double y; } lastTapLoc;
@property double lastTapTimestamp;
@property (retain) NSArray *lastDitchRecognizers;

- (void)dealloc;

@end
