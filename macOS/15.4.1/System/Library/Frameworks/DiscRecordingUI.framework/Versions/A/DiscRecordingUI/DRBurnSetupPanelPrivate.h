@class DRMoveHelper;

@interface DRBurnSetupPanelPrivate : DRSetupPanelPrivate {
    float _resizeDelta;
    DRMoveHelper *_moveHelper;
    id _defaultButtonDefaultTitle;
}

- (void)dealloc;
- (void)setResizeDelta:(float)a0;
- (id)defaultButtonDefaultTitle;
- (id)moveHelper;
- (float)resizeDelta;
- (void)setDefaultButtonDefaultTitle:(id)a0;
- (void)setMoveHelper:(id)a0;

@end
