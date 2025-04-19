@class NSView;
@protocol NSMenuItemViewProtocol;

@interface NSPaletteMenuItem : NSMenuItem {
    void /* unknown type, empty encoding */ color;
}

@property (nonatomic, readonly) NSView<NSMenuItemViewProtocol> *_managedItemView;

- (id)copyWithZone:(void *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 action:(SEL)a1 keyEquivalent:(id)a2;
- (id)initWithColor:(id)a0 image:(id)a1 title:(id)a2;

@end
