@class NSTextField, NSView, PPGesture, NSPopUpButton, NSButton, PPGestureMovieView;

@interface PPGestureRow : NSObject {
    NSView *mGroupRowView;
    NSView *mGestureRowView;
    NSButton *mGestureOptions;
    NSButton *mEnableGestureButton;
    NSTextField *mGestureName;
    NSTextField *mGestureLabel;
    BOOL mUIEnabled;
}

@property (retain) PPGesture *gesture;
@property (readonly) NSTextField *groupTitle;
@property (readonly) NSTextField *title;
@property (readonly) NSButton *optionsButton;
@property (readonly) NSPopUpButton *choicesPopUp;
@property (readonly) NSButton *enableGestureButton;
@property (retain) PPGestureMovieView *movieView;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)view;
- (id)title;
- (void)refreshUI;
- (void)setup;
- (void)setUIEnabled:(BOOL)a0;
- (id)optionsButton;
- (void)_popUpButtonWillPopUpNotification:(id)a0;
- (void)_refreshUIForGestureNotification:(id)a0;
- (id)enableGestureButton;

@end
