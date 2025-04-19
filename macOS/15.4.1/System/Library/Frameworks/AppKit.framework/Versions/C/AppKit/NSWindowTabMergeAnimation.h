@class NSArray, NSMutableArray;

@interface NSWindowTabMergeAnimation : NSAnimation {
    NSMutableArray *_windowsToAnimate;
    NSMutableArray *_coverWindows;
    NSMutableArray *_windowFromRects;
    NSArray *_targetTabFrames;
    id /* block */ _completionHandler;
}

- (void)run;
- (void).cxx_destruct;
- (void)_stopAnimation:(long long)a0 withDisplayLink:(id)a1;
- (id)initWithWindows:(id)a0 targetTabFrames:(id)a1 targetWindow:(id)a2 completionHandler:(id /* block */)a3;
- (void)_doAnimationWork;
- (void)_finished;
- (void)setCurrentProgress:(float)a0;

@end
