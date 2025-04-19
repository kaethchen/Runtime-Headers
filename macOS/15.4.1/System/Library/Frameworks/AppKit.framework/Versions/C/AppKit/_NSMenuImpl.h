@class NSStoryboard, NSString, NSUUID, NSData, NSMenu, NSFont, NSObject;
@protocol NSAppearanceCustomization;

@interface _NSMenuImpl : NSObject {
    id _impl;
    id _delegate;
    id _menuOwner;
    NSObject<NSAppearanceCustomization> *_appearanceParent;
    NSFont *_font;
    NSString *_name;
    id _startingRequestor;
    double _minimumWidth;
    struct NSMenuUpdaterInfo_t { struct NSMenuUpdaterInfo_t *x0; id /* block */ x1; id x2; short x3; unsigned short x4; } *sidebandUpdaters;
    NSData *currentUpdaters;
    const void *_contextMenuPluginAEDesc;
    NSStoryboard *_storyboard;
    NSString *_lastShortcutInputSourceIdentifier;
    unsigned long long _indentationWidth;
    BOOL _disablesKeyboardAdjustedShortcuts;
    NSMenu *_previousMenu;
    NSMenu *_nextMenu;
    id /* block */ _selectionHandler;
    NSUUID *_uniqueIdentifier;
    unsigned long long _lastPopulateFlags;
    double _lastPopulateTime;
    double _lastEnableTime;
    unsigned long long _systemAttributes;
    long long _lastHighlightIndex;
    unsigned long long _minModifiersCacheTag;
    long long _typingBehavior;
    long long _selectionMode;
    long long _presentationStyle;
    BOOL _hasBeenSuppressed;
    BOOL _isHiddenInRepresentation;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
