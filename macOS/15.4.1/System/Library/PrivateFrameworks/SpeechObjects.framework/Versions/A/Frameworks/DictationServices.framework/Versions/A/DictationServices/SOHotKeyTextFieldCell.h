@class ConfigKeyEditor;
@protocol ConfigEditorDelegate;

@interface SOHotKeyTextFieldCell : NSTextFieldCell {
    ConfigKeyEditor *_ConfigKeyEditor;
}

@property (nonatomic) id<ConfigEditorDelegate> hotKeyController;

- (void)dealloc;
- (void)controlTextDidBeginEditing:(id)a0;
- (id)fieldEditorForView:(id)a0;
- (void)controlTextCancelEditing:(id)a0;
- (void)controlTextDone:(id)a0;
- (BOOL)controlTextShouldAllowClear:(id)a0;

@end
