@class NSView, NSSet;

@interface _NSViewLayoutInvalidator : NSObject {
    NSView *_observedView;
    NSSet *_observedKeyPaths;
    BOOL _handleAlignmentRectInsets;
}

@property NSView *observedView;

+ (id)newInvalidatorForView:(id)a0;

- (void)dealloc;
- (id)autorelease;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)keyPathsForPropertiesObservedDirectly;

@end
