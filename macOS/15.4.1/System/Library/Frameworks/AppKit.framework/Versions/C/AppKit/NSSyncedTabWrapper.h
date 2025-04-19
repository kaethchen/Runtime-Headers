@class NSWindow;

@interface NSSyncedTabWrapper : NSBaseTabData

@property (retain) NSWindow *window;
@property BOOL snapshotIsDisabled;

- (void).cxx_destruct;
- (void)dispose;

@end
