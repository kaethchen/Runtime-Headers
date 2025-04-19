@interface VFXUIHandleButton : NSButton {
    id _instance;
    BOOL _removeButton;
    BOOL _allowsCreation;
}

@property BOOL removeButton;
@property BOOL allowsCreation;
@property (retain) id instance;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
