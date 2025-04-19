@class UINSSceneView, NSArray, NSMutableDictionary, NSMutableSet;

@interface UINSTouchAccommodationVisualizer : NSView {
    NSMutableSet *_pool;
    NSMutableDictionary *_touches;
}

@property (weak) UINSSceneView *sceneView;
@property (readonly) NSArray *touchKeys;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)removeAllTouches;
- (void)removeTouchesWithKeys:(id)a0;
- (void)updateTouchWithKey:(id)a0 sceneLocation:(struct CGPoint { double x0; double x1; })a1;

@end
