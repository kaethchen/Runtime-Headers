@class NSView, QCKeyFrameEditorWindow, NSTextField;

@interface QCKeyFrameEditor : NSObject {
    NSView *view;
    NSTextField *tField;
    NSTextField *vField;
    QCKeyFrameEditorWindow *_window;
}

- (void)dealloc;
- (void)cancel:(id)a0;
- (void)awakeFromNib;
- (void)done:(id)a0;
- (BOOL)runEditorForTimeLine:(id)a0 atKeyFrame:(long long)a1 forTimeLine:(long long)a2 controlType:(int)a3 inView:(id)a4 atPoint:(struct CGPoint { double x0; double x1; })a5;

@end
