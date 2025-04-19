@class NSView, CNContact, _TtC10ContactsUI24ContactHeaderViewWrapper;
@protocol CNContactHeaderViewControllerDelegate;

@interface CNContactHeaderViewController : NSViewController <ContactsUI.ContactHeaderViewWrapperDelegate>

@property (retain, nonatomic) NSView *headerView;
@property (retain, nonatomic) _TtC10ContactsUI24ContactHeaderViewWrapper *headerViewWrapper;
@property (nonatomic) BOOL enableStatusBadges;
@property (weak, nonatomic) id<CNContactHeaderViewControllerDelegate> delegate;
@property (retain, nonatomic) CNContact *contact;
@property (nonatomic) long long quickActionViewStyle;

+ (id)descriptorForRequiredKeys;

- (id)init;
- (void).cxx_destruct;
- (id)initWithContact:(id)a0;
- (double)desiredHeight;
- (void)didSelectActionOfType:(id)a0 fromDisambiguationUI:(BOOL)a1;
- (void)enableStatusBadges:(BOOL)a0;
- (id)initWithContact:(id)a0 quickActionViewStyle:(long long)a1;
- (void)initializeHeaderWrapperView;
- (void)setupViewIfNeeded;
- (void)willPresentDisambiguationUIActionType:(id)a0;
- (long long)wrapperActionViewStyle;

@end
