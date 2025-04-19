@class NSPopUpButtonCell, NSTimer, DRDeviceFilter, NSMutableArray;

@interface DRDeviceChooserCell : NSActionCell {
    NSPopUpButtonCell *_popupCell;
    NSTimer *_debounceTimer;
    DRDeviceFilter *_filter;
    NSMutableArray *_deviceList;
    struct __DRDevChooserFlags { unsigned char disableNotifications : 1; unsigned char awakened : 1; unsigned char newp : 1; unsigned int reserved : 29; } _dcFlags;
    unsigned long long _count;
    unsigned int _reserved1;
    unsigned int _reserved2;
    unsigned int _reserved3;
    unsigned int _reserved4;
}

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)filter;
- (void)setFilter:(id)a0;
- (id)exposedBindings;
- (void)setControlSize:(unsigned long long)a0;
- (void)_invalidateTimer;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)_sendAction;
- (void)_setControlView:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilityValueAttribute;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuItem;
- (void)performClickWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setBordered:(BOOL)a0;
- (void)setFont:(id)a0;
- (void)setShowsFirstResponder:(BOOL)a0;
- (BOOL)showsFirstResponder;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (id)selectedDevice;
- (void)setSelectedDevice:(id)a0;
- (id)_bestDevice;
- (void)_addCollectedDevices:(id)a0;
- (void)_addDevices:(id)a0;
- (void)_deviceAppeared:(id)a0;
- (void)_deviceDisappeared:(id)a0;
- (void)_devicePopupSelected:(id)a0;
- (void)_initCommon:(id)a0;
- (void)_rebuildPopup;
- (id)newDevicePopupCell;
- (void)selectDevice:(id)a0;

@end
