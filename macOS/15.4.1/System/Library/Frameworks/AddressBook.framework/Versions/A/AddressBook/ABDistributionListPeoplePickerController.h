@class ABAddressBook;

@interface ABDistributionListPeoplePickerController : ABPeoplePickerController {
    ABAddressBook *_parallelAddressBook;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)fetchPredicate;
- (void)setAccounts:(id)a0;
- (BOOL)shouldIncludeGroups;
- (BOOL)shouldUnifyPeople;
- (void)distributionListPersonEntriesDidChange:(id)a0;
- (void)restoreSelection;
- (void)saveDistributionListChanges;
- (void)saveSelection;
- (void)setValueSelectionBehavior:(int)a0;
- (void)tableView:(id)a0 userClickedSubrow:(long long)a1 ofRow:(long long)a2;

@end
