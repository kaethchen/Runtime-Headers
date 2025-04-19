@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {
    NSProgress *_originalProgress;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_update;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_registerForKVO;
- (id)_initWithMirroredProgressForSubclasses:(id)a0;
- (void)_replaceObservedProgressWith:(id)a0;
- (void)_unregisterForKVO;
- (id)initWithMirroredProgress:(id)a0;

@end
