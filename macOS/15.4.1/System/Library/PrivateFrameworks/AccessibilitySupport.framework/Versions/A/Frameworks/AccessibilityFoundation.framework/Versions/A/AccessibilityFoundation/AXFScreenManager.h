@class AXFScreen, NSArray, NSPointerArray, NSString, _AXFScreenSourceHardware, NSObject;
@protocol OS_dispatch_queue, AXFScreenSource;

@interface AXFScreenManager : NSObject <AXFScreenSourceDelegate>

@property (class, readonly) AXFScreenManager *shared;

@property (retain, nonatomic) id<AXFScreenSource> screenSource;
@property (retain, nonatomic) _AXFScreenSourceHardware *_hardware;
@property (retain, nonatomic) NSPointerArray *_observers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_localQueue;
@property (readonly, nonatomic) AXFScreen *primaryScreen;
@property (readonly) AXFScreen *mainScreen;
@property (readonly, nonatomic) AXFScreen *mouseScreen;
@property (readonly, nonatomic) NSArray *allScreens;
@property (readonly, nonatomic) NSArray *allScreenFrames;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } totalScreenBounds;
@property (readonly, nonatomic) double maximumBackingScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)keyPathsForValuesAffectingMainScreen;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)screenSource:(id)a0 mainScreenChanged:(id)a1;
- (id)_screenAtIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullyOnScreenRectClosestToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_enumerateNonNilObserversOnLocalQueueAndPerform:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_invertYCoordinateOfRectInScreenSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_screenClosestToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_screenContainingPoint:(struct CGPoint { double x0; double x1; })a0 exclusingEdges:(unsigned long long)a1;
- (void)_signalMainScreenChanged:(id)a0;
- (void)_signalScreensChanged:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPointToBottomLeftOriginScreenCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })convertPointToTopLeftOriginScreenCoordinateSpace:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToBottomLeftOriginScreenCoordinateSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToTopLeftOriginScreenCoordinateSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })fullyOnScreenRectClosestToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 consideringPriorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)isPointOnAnyScreen:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })onScreenPointClosestToPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })onScreenPointClosestToPoint:(struct CGPoint { double x0; double x1; })a0 consideringPriorPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)screenClosestToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)screenContainingMostOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)screenContainingPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)screenSource:(id)a0 screensChanged:(id)a1;

@end
