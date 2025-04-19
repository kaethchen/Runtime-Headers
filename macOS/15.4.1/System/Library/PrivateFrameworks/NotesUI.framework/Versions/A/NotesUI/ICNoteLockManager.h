@class ICNote, ICAccount, NSWindow;

@interface ICNoteLockManager : NSObject

@property (retain, nonatomic) ICNote *updatedNote;
@property (readonly, nonatomic) ICAccount *account;
@property (readonly, nonatomic) ICNote *note;
@property (weak, nonatomic) NSWindow *window;

- (void).cxx_destruct;
- (id)initWithNote:(id)a0;
- (void)addLockWithCompletionHandler:(id /* block */)a0;
- (void)removeLockWithCompletionHandler:(id /* block */)a0;
- (void)toggleLockWithCompletionHandler:(id /* block */)a0;
- (void)unsafelyToggleLockWithCompletionHandler:(id /* block */)a0;
- (void)updateDivergedAttachmentsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)updateDivergedAttachmentsWithPassphrase:(id)a0 completion:(id /* block */)a1;

@end
