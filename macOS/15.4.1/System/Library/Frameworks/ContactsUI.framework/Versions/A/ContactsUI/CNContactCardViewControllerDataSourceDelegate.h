@class CNContactCardViewController, NSString, AKCardViewDataSource, ABPerson, CNContactDetailsViewController;

@interface CNContactCardViewControllerDataSourceDelegate : NSObject <ABCardViewDataSourceDelegate>

@property (nonatomic) BOOL removingEmptyData;
@property (weak, nonatomic) ABPerson *legacySaveTarget;
@property (weak, nonatomic) AKCardViewDataSource *dataSource;
@property (weak, nonatomic) CNContactDetailsViewController *contactDetailsViewController;
@property (weak, nonatomic) CNContactCardViewController *contactCardViewController;
@property (nonatomic) BOOL saveChangesToABPerson;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dataSourceDidChangeValueForKey:(id)a0;
- (void)dataSourceDidChange:(id)a0;
- (void)dataSourceWillChangeValueForKey:(id)a0;
- (void)updateWithSaveTarget:(id)a0 dataSource:(id)a1 contactDetailsViewController:(id)a2 contactCardViewController:(id)a3;

@end
