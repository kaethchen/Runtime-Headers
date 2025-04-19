@interface RemindersUICore.TTRMComponentViewNotesComponentView : NSView {
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ textView;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)toggleBold:(id)a0;
- (void)toggleItalics:(id)a0;
- (void)toggleUnderline:(id)a0;

@end
