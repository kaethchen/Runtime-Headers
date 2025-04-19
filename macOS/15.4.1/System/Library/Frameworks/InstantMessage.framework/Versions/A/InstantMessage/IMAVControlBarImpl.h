@class NSMutableArray;

@interface IMAVControlBarImpl : IMAVControlBar {
    NSMutableArray *_controls;
    BOOL _updateScheduled;
}

+ (id)sharedControlBar;

- (id)init;
- (id)_dictionaryRepresentation;
- (id)controls;
- (void)addControl:(id)a0;
- (void)removeControl:(id)a0;
- (void)_controlDidChange:(id)a0;
- (void)_deferredControlSync;
- (void)removeAllControls;

@end
