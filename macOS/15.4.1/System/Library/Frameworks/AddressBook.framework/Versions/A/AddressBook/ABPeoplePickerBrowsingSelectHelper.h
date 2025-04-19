@class NSString, ABGroupBrowsingContext, ABPeoplePickerController;

@interface ABPeoplePickerBrowsingSelectHelper : NSObject <ABGroupSelectHelper> {
    ABGroupBrowsingContext *_browsingContext;
    ABPeoplePickerController *_peoplePickerController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)performSelect;
- (id)initWithBrowsingContext:(id)a0 peoplePickerController:(id)a1;

@end
