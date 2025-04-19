@class CNUIUserActionListDataSource, CNContact, NSString, CNUIEditingPolicy, CNContainer;
@protocol CNSchedulerProvider;

@interface CNContactCardViewControllerWidgetProviderDelegate : NSObject <CNContactCardWidgetProviderDelegate>

@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) CNUIEditingPolicy *editingPolicy;
@property (readonly, nonatomic) CNUIUserActionListDataSource *userActionListDataSource;
@property (retain, nonatomic) CNContact *displayedContact;
@property (retain, nonatomic) CNContainer *containerOfDisplayedContact;
@property (nonatomic) BOOL isEditing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
