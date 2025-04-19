@class NSView;

@interface NSPreferencesModule : NSObject <NSPreferencesModule> {
    struct CGSize { double width; double height; } _minSize;
    BOOL _hasChanges;
    void *_reserved;
}

@property (retain) NSView *preferencesView;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)helpAnchor;
- (struct CGSize { double x0; double x1; })minSize;
- (void)willBeDisplayed;
- (void)didChange;
- (BOOL)hasChangesPending;
- (id)helpBook;
- (id)imageForPreferenceNamed:(id)a0;
- (void)initializeFromDefaults;
- (BOOL)isResizable;
- (BOOL)moduleCanBeRemoved;
- (void)moduleWasInstalled;
- (void)moduleWillBeRemoved;
- (id)preferencesNibName;
- (BOOL)preferencesWindowShouldClose;
- (void)saveChanges;
- (void)setMinSize:(struct CGSize { double x0; double x1; })a0;
- (void)set_preferencesView:(id)a0;
- (id)titleForIdentifier:(id)a0;
- (id)viewForPreferenceNamed:(id)a0;

@end
