@class NSColor;

@interface MusicUI.SelectorMaterialButton : MusicUI.MaterialButton {
    void /* unknown type, empty encoding */ selectedImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_selectedImageConfiguration;
    void /* unknown type, empty encoding */ isSelected;
    void /* unknown type, empty encoding */ selectedFillColor;
    void /* unknown type, empty encoding */ onValueChanged;
    void /* unknown type, empty encoding */ onValueDidRevertToInitialValue;
    void /* unknown type, empty encoding */ initialIsSelected;
    void /* unknown type, empty encoding */ ignoreValueChangedBlocks;
}

@property (nonatomic, retain) NSColor *contentTintColor;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (id)accessibilityValue;

@end
