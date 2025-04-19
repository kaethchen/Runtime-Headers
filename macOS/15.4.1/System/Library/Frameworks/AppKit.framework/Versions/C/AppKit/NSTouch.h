@class NSView;

@interface NSTouch : NSObject <NSCopying> {
    long long _index;
    struct CGPoint { double x; double y; } _pos1;
    struct { unsigned char _resting : 1; unsigned char _locIsPixels : 1; } _flags;
    NSView *_view;
    double _force;
    struct CGPoint { double x; double y; } _pos0;
    long long _touchType;
    long long _contextId;
    double _timestamp;
}

@property (readonly) struct CGPoint { double x0; double x1; } previousNormalizedPosition;
@property (readonly) double timestamp;
@property (readonly) id identity;
@property (readonly) unsigned long long phase;
@property (readonly) struct CGPoint { double x0; double x1; } normalizedPosition;
@property (readonly, getter=isResting) BOOL resting;
@property (readonly) id device;
@property (readonly) struct CGSize { double width; double height; } deviceSize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (long long)type;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (long long)_contextId;
- (double)_force;
- (long long)_index;
- (id)_initWithIdentity:(id)a0 index:(long long)a1 phase:(unsigned long long)a2 contextId:(long long)a3 position:(struct CGPoint { double x0; double x1; })a4 previousPosition:(struct CGPoint { double x0; double x1; })a5 touchType:(long long)a6 timestamp:(double)a7 isResting:(BOOL)a8 view:(id)a9 device:(id)a10 deviceSize:(struct CGSize { double x0; double x1; })a11 force:(double)a12;
- (id)_initWithIndex:(long long)a0 phase:(unsigned long long)a1 contextId:(long long)a2 position:(struct CGPoint { double x0; double x1; })a3 previousPosition:(struct CGPoint { double x0; double x1; })a4 touchType:(long long)a5 timestamp:(double)a6 isResting:(BOOL)a7 view:(id)a8 device:(id)a9 deviceSize:(struct CGSize { double x0; double x1; })a10 force:(double)a11;
- (id)_initWithPreviousTouch:(id)a0 newPhase:(unsigned long long)a1 position:(struct CGPoint { double x0; double x1; })a2 timestamp:(double)a3 isResting:(BOOL)a4 force:(double)a5;
- (id)_touchByCancellingTouch;
- (id)_view;
- (struct CGPoint { double x0; double x1; })previousLocationInView:(id)a0;

@end
