@class FI_TFloatingInputView;

@interface FI_TFloatingInputWindow : NSPanel {
    FI_TFloatingInputView *_floatingInputView;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)inputContext;
- (id)text;
- (void)setText:(id)a0;
- (BOOL)preProcessedByInputMethod:(id)a0 forDelegate:(id)a1;

@end
