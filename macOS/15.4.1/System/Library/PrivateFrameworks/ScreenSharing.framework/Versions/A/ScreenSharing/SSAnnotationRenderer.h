@interface SSAnnotationRenderer : NSObject

+ (id)sharedRenderer;

- (void)dealloc;
- (id)init;
- (BOOL)showAllPointers;
- (void)handleSafeViewAnnotation:(struct CGPoint { double x0; double x1; })a0 flags:(unsigned int)a1;
- (BOOL)hideAllPointers;
- (int)startAnnotation;
- (BOOL)hidePointerForUser:(id)a0;
- (BOOL)showPointerForUser:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)stopAnnotation;

@end
