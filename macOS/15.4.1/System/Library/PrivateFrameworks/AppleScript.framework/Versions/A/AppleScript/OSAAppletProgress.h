@class NSArray, NSString, NSProgress, NSProgressIndicator, NSWindow;

@interface OSAAppletProgress : NSObject {
    NSWindow *_progressWindow;
    NSProgressIndicator *_progressIndicator;
    BOOL _workingOnIt;
    struct ComponentInstanceRecord { long long x0[1]; } *_component;
}

@property (retain) NSArray *topLevelObjects;
@property (copy) NSString *localizedDescription;
@property (copy) NSString *localizedAdditionalDescription;
@property (getter=isIndeterminate) BOOL indeterminate;
@property float fractionCompleted;
@property (retain) NSProgress *progress;
@property BOOL wantsStop;

- (void)finish;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithComponent:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;
- (void)stop:(id)a0;
- (void)showWindow;

@end
