@class NSArray, NSMutableArray;

@interface MRTouch : NSObject {
    NSMutableArray *_gestureRecognizers;
}

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long tapCount;
@property (nonatomic) int phase;
@property (readonly) NSArray *gestureRecognizers;

+ (id)touchWithLocation:(struct CGPoint { double x0; double x1; })a0 timestamp:(double)a1 tapCount:(unsigned long long)a2;
+ (id)touchWithNSTouch:(id)a0 inView:(id)a1;

- (void)dealloc;
- (id)description;
- (void)addGestureRecognizer:(id)a0;
- (void)removeGestureRecognizer:(id)a0;
- (id)initWithNSTouch:(id)a0 inView:(id)a1;

@end
