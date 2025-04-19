@class NSFont, NSString, NSAttributedString, _NSBindingAdaptor, NSMenuItemViewer, NSUUID, NSImage, NSMenuItemBadge;

@interface NSExtraMIData : NSObject {
    NSAttributedString *attributedTitle;
    NSString *subtitle;
    NSString *tooltip;
    NSMenuItemBadge *badge;
    _NSBindingAdaptor *bindingAdaptor;
    NSMenuItemViewer *menuItemViewer;
    NSImage *onStateImage;
    NSImage *offStateImage;
    NSImage *mixedStateImage;
    NSFont *font;
    NSImage *_image;
    NSImage *highlightedImage;
    struct CGSize { double width; double height; } imageSize;
    NSString *userKE;
    NSString *kbdKE;
    NSString *keInputSourceIdentifier;
    NSString *keDisplayOverride;
    NSUUID *uniqueIdentifier;
    unsigned int hotKeyShortcut;
    unsigned char hotKeyAdditionalModifiers;
    unsigned char userKEMask;
    unsigned char kbdKEMask;
    unsigned char hotKeyKEMask;
    NSString *hotKeyKE;
    struct CGSize { double width; double height; } cachedAttributedTitleSize;
    long long cachedAttributedTitleHeightForDrawing;
    unsigned long long cachedTitleHashForMeasurement;
    unsigned long long cachedFontHashForMeasurement;
    BOOL attributedTitleHasAttachment;
    unsigned short virtualKeyCode;
    unsigned short defaultKEPriority;
    unsigned long long newItemsCount;
    id /* block */ actionBlock;
    BOOL scaleDownImageToFit;
    BOOL shouldRemoveNewlines;
}

- (id)init;

@end
