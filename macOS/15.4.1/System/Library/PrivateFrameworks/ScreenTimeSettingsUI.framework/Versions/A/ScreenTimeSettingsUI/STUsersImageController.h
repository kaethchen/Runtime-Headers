@class NSImage, STCoreUsersController;

@interface STUsersImageController : NSObject

@property (retain) STCoreUsersController *usersController;
@property (copy) NSImage *selectedUserImage;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_registerAsObserverForSelectedUser;
- (id)initWithUsersController:(id)a0;
- (void)refreshSelectedUserImage;

@end
