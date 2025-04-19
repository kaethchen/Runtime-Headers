@class NSDictionary;

@interface QLSeamlessDocumentCloser : NSObject

@property (copy) NSDictionary *displayState;
@property (readonly, getter=isAnimating) BOOL animating;

+ (id)existingSeamlessDocumentCloserForWindow:(id)a0;
+ (id)seamlessDocumentCloserForURL:(id)a0;
+ (id)seamlessApplicationCloser;
+ (id)seamlessDocumentCloserForWindow:(id)a0;
+ (id)setupCloserForWindow:(id)a0 withLauncherPort:(unsigned int)a1;

- (void)dealloc;
- (void)closeWindow:(id)a0 contentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withBlock:(id /* block */)a2;
- (void)closeWithContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 block:(id /* block */)a1;

@end
