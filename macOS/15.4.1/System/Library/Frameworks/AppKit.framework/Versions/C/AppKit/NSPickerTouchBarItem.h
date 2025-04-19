@class NSString, NSImage, NSPickerTouchBarItemView, NSColor;

@interface NSPickerTouchBarItem : NSTouchBarItem {
    NSString *_customizationLabel;
    NSPickerTouchBarItemView *_pickerView;
}

@property long long controlRepresentation;
@property (copy) NSString *collapsedRepresentationLabel;
@property (retain) NSImage *collapsedRepresentationImage;
@property long long selectedIndex;
@property (copy) NSColor *selectionColor;
@property long long selectionMode;
@property long long numberOfOptions;
@property (weak) id target;
@property SEL action;
@property (getter=isEnabled) BOOL enabled;
@property (copy) NSString *customizationLabel;

+ (id)pickerTouchBarItemWithIdentifier:(id)a0 images:(id)a1 selectionMode:(long long)a2 target:(id)a3 action:(SEL)a4;
+ (id)pickerTouchBarItemWithIdentifier:(id)a0 labels:(id)a1 selectionMode:(long long)a2 target:(id)a3 action:(SEL)a4;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)view;
- (id)imageAtIndex:(long long)a0;
- (BOOL)isEnabledAtIndex:(long long)a0;
- (id)labelAtIndex:(long long)a0;
- (void)setEnabled:(BOOL)a0 atIndex:(long long)a1;
- (void)setImage:(id)a0 atIndex:(long long)a1;
- (void)setLabel:(id)a0 atIndex:(long long)a1;

@end
