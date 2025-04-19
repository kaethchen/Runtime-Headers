@class NSTextField, NSString, NSPopUpButton, NSButton, NSPopover;

@interface _NSActionRecordTableCellView : NSTableCellView <NSPopoverDelegate> {
    NSTextField *_selectorTextField;
    NSTextField *_senderTextField;
    NSButton *_addButton;
    NSPopover *_popover;
    NSButton *_actionRadioButton;
    NSButton *_actionNameRadioButton;
    NSTextField *_labelTextField;
    NSPopUpButton *_imagePopUp;
    NSButton *_defaultCheckbox;
    long long _tag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)setObjectValue:(id)a0;
- (void)_add:(id)a0;
- (void)_save:(id)a0;
- (void)_selectActionType:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)popoverDidClose:(id)a0;

@end
