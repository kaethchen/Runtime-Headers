@class NSObject;
@protocol NSWindowSharingSessionHostButtonDelegate;

@interface NSWindowSharingSessionHostButton : NSButton

@property (weak) NSObject<NSWindowSharingSessionHostButtonDelegate> *delegate;
@property BOOL acceptsHover;
@property BOOL recordingStyle;

+ (void)initialize;

- (id)_buttonCell;
- (id)accessibilityTitle;
- (void)closeMenu;

@end
