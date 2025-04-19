@class NSString, ABGroupSearchingContext, ABPeoplePickerController;

@interface ABPeoplePickerSearchingSelectHelper : NSObject <ABGroupSelectHelper> {
    ABGroupSearchingContext *_searchingContext;
    ABPeoplePickerController *_peoplePickerController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performSelect;
- (id)initWithSearchingContext:(id)a0 peoplePickerController:(id)a1;

@end
