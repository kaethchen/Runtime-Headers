@class CNContactListHelperScope, CNContactListController, NSString;
@protocol CNContactPickerInternalResponseDelegate;

@interface CNContactListSelectHelper : NSObject <CNContactListSelectHelper>

@property (readonly, nonatomic) CNContactListController *contactListController;
@property (readonly, nonatomic) id<CNContactPickerInternalResponseDelegate> delegate;
@property (readonly, nonatomic) CNContactListHelperScope *scope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)hasValue;
- (id)initWithDelegate:(id)a0 listController:(id)a1 scope:(id)a2;
- (void)performSelect;
- (void)selectContact;

@end
