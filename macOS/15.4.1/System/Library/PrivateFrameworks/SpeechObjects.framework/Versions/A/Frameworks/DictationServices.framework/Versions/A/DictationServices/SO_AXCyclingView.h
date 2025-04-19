@class NSTimer, NSArray;
@protocol SO_AXCyclingViewDelegate;

@interface SO_AXCyclingView : NSView

@property (nonatomic) BOOL isCycling;
@property (nonatomic) unsigned long long cycleIndex;
@property (retain, nonatomic) NSTimer *cycleTimer;
@property (nonatomic) BOOL shouldReduceMotion;
@property (readonly, nonatomic) double interval;
@property (readonly, nonatomic) NSArray *viewsInCycle;
@property (weak, nonatomic) id<SO_AXCyclingViewDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (id)initWithInterval:(double)a0;
- (void)_makeNextViewVisible;
- (void)_updateForCycleIndexAnimated:(BOOL)a0;
- (void)beginCycling;
- (void)endCycling;

@end
