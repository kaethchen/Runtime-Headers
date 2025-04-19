@interface QCPatchPathView : GFGraphPathView {
    void *_unused2[4];
}

+ (void)initialize;
+ (BOOL)_isGraph:(id)a0;

- (Class)valueClassForBinding:(id)a0;
- (void)setPatchEditor:(id)a0;
- (id)currentPatch;
- (id)patchEditor;
- (id)rootPatch;
- (void)setCurrentPatch:(id)a0;
- (void)setRootPatch:(id)a0;

@end
