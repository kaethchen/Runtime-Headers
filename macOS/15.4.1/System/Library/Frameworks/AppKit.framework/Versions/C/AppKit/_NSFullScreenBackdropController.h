@class _NSFullScreenSpace, NSMutableArray;

@interface _NSFullScreenBackdropController : NSObject {
    NSMutableArray *_backgroundWindows;
}

@property (nonatomic) _NSFullScreenSpace *space;

- (void)dealloc;
- (id)_createBackgroundWindowOnScreen:(id)a0;
- (id)backgroundWindowIDs;
- (void)removeBackgroundWindows;
- (void)updateBackgroundWindows;

@end
