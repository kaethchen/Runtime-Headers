@class MCSSyncResumer;

@interface IMSyncResumer : NSObject

@property (retain, nonatomic) MCSSyncResumer *resumer;

- (void).cxx_destruct;
- (void)attemptToResumeSyncIfAppropriate;
- (void)attemptToResumeSyncOnAccountUpdateIfAppropriate;
- (void)attemptToResumeSyncOnIdentityUpdateIfAppropriate;
- (id)initWithDelegate:(id)a0 syncStateManager:(id)a1;
- (id)systemMonitorListener;

@end
