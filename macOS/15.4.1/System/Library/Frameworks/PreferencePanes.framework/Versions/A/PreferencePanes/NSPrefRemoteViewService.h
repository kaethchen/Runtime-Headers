@class NSString, NSWindow, NSPreferencePane;

@interface NSPrefRemoteViewService : NSServiceViewController <NSWindowDelegate>

@property (weak) NSPreferencePane *prefPane;
@property (weak) NSWindow *window;
@property (readonly) NSString *prefPanePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)loadView;
- (id)windowWillReturnFieldEditor:(id)a0 toObject:(id)a1;
- (void)advanceToRunPhase;
- (BOOL)allowsSnapshot;
- (unsigned long long)awakeFromRemoteView;
- (id)prefPanePath;

@end
