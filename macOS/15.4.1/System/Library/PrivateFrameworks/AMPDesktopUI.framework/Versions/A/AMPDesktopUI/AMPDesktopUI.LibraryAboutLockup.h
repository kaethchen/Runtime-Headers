@class NSString;

@interface AMPDesktopUI.LibraryAboutLockup : NSView {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ body;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *body;

+ (id)lockup;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
