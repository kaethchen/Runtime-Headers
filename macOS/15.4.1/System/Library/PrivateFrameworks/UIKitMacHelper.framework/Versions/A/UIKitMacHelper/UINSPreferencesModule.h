@class NSString, NSView, NSImage, NSUserDefaultsController;

@interface UINSPreferencesModule : NSPreferencesModule

@property (retain) NSView *rootView;
@property (copy) NSString *title;
@property (retain) NSImage *toolbarIcon;
@property (copy) NSString *helpAnchor;
@property (copy) NSString *helpBook;
@property (retain) NSUserDefaultsController *userDefaultsController;

- (void).cxx_destruct;
- (id)imageForPreferenceNamed:(id)a0;
- (BOOL)isResizable;
- (id)preferencesNibName;
- (id)titleForIdentifier:(id)a0;
- (id)viewForPreferenceNamed:(id)a0;

@end
