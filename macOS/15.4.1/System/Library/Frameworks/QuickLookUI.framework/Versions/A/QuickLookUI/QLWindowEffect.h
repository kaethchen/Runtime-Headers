@class NSWindow, NSMapTable;

@interface QLWindowEffect : NSObject {
    NSMapTable *_childWindows;
}

@property (retain) NSWindow *window;
@property (copy) id /* block */ preparationBlock;
@property (copy) id /* block */ completionBlock;
@property unsigned int effectID;

+ (double)QLEaseInLongEaseOutValueForProgress:(double)a0 isInverted:(BOOL)a1;

- (void).cxx_destruct;
- (void)invoke;
- (id)initWithWindow:(id)a0;
- (id)prepare;
- (void)done;
- (void)abort;
- (void)windowDidUpdate;
- (void)_restoreChildWindows;

@end
