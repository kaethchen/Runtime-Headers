@class CNContactNameViewController, CNContactCardViewControllerDataSourceDelegate, CNContactCardViewController;

@interface CNContactCardViewControllerABPersonViewMediator : NSObject

@property (weak, nonatomic) CNContactCardViewController *contactCardViewController;
@property (weak, nonatomic) CNContactNameViewController *contactNameViewController;
@property (weak, nonatomic) CNContactCardViewControllerDataSourceDelegate *dataSourceDelegate;

- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0;
- (BOOL)editing;
- (void)dataSourceChangesShouldPersistOnABPerson:(BOOL)a0;
- (id)initWithCardViewController:(id)a0 contactNameViewController:(id)a1 dataSourceDelegate:(id)a2;

@end
