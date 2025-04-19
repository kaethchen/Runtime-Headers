@class NSImageView, NSString, NSImage, NSButton;

@interface AKLineStyleMenuViewItem : NSView <AKUserInterfaceItem> {
    long long _tag;
}

@property (retain) NSImageView *stateIndicatorView;
@property (retain) NSButton *button;
@property (nonatomic) long long state;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)tag;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 tag:(long long)a1 toolTip:(id)a2 image:(id)a3 target:(id)a4 action:(SEL)a5;

@end
