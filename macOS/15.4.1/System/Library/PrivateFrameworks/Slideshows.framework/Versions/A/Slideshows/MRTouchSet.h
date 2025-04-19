@class NSMutableSet, NSMutableDictionary;

@interface MRTouchSet : NSObject {
    NSMutableDictionary *_touchesForNSTouches;
}

@property (readonly) NSMutableSet *touches;
@property (readonly) struct CGPoint { double x0; double x1; } centroid;
@property (readonly) double scale;
@property (readonly) double rotation;
@property (readonly) BOOL isActive;
@property (readonly) unsigned long long countOfActiveTouches;

- (void)dealloc;
- (id)description;
- (void)removeAllTouches;
- (void)addTouch:(id)a0;
- (id)initWithTouch:(id)a0;
- (void)removeTouch:(id)a0;
- (void)cancelAllTouches;
- (id)initWithNSTouches:(id)a0 inView:(id)a1;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 andCountOfTouches:(unsigned long long)a1;
- (id)initWithTouches:(id)a0;
- (id)updateWithNSTouches:(id)a0 inView:(id)a1;
- (id)updateWithPosition:(struct CGPoint { double x0; double x1; })a0 andCountOfTouches:(unsigned long long)a1;

@end
