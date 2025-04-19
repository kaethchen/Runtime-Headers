@class CPKWindowTitleView, CPKPopoverController, CPKPopover, NSButton, NSWindow;
@protocol CPKCharacterEntity;

@interface CPKWindowPrivateStorage : NSObject

@property CPKPopover *parentPopover;
@property (retain) CPKPopoverController *smallViewController;
@property (retain) NSButton *smallViewCloseButton;
@property (retain) CPKWindowTitleView *smallViewTitleField;
@property (retain) NSButton *smallViewCharacterViewerButton;
@property (retain) id<CPKCharacterEntity> pendingCharacter;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } lastWindowFrame;
@property NSWindow *lastKeyWindow;
@property BOOL bringBackLastKeyWindow;
@property BOOL transformPrepared;
@property BOOL transformFromPopover;
@property BOOL nowTransforming;
@property (copy) id /* block */ measureFramerateBlock;

- (void)dealloc;

@end
