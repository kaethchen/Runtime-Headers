@interface NSSelfDestructingRemoteViewDelegate : NSObject <NSRemoteViewDelegate>

@property (readonly) BOOL shouldRetainExportedObject;

- (void)dealloc;
- (void)viewDidInvalidate:(id)a0;

@end
