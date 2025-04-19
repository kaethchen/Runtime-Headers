@class NSString, CNAvatarViewController;

@interface TabGroupActivityNoticeView : ActivityNoticeView <CNAvatarViewDelegate> {
    CNAvatarViewController *_avatarViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)avatarViewControllerDidRefresh:(id)a0;
- (void)avatarViewController:(id)a0 contactAvatarDidChange:(id)a1;
- (void)_updateAvatar:(id)a0;
- (id)initWithTitleText:(id)a0 messageText:(id)a1 contact:(id)a2;

@end
