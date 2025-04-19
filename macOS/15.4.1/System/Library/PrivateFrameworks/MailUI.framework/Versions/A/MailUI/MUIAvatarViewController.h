@class CNAvatarViewController, NSView;

@interface MUIAvatarViewController : NSObject

@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (readonly, nonatomic) NSView *view;

+ (id)avatarControllerWithContacts:(id)a0;

- (void).cxx_destruct;
- (id)initWithContacts:(id)a0;
- (void)updateContacts:(id)a0;

@end
