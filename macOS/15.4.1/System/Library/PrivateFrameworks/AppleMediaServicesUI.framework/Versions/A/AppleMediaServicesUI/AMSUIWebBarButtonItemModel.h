@class NSArray, NSString, AMSUIWebButtonModel, AMSUIWebAppViewModel;

@interface AMSUIWebBarButtonItemModel : NSObject <AMSUIWebModelInterface>

@property (retain) AMSUIWebAppViewModel *appViewModel;
@property (retain) AMSUIWebButtonModel *buttonModel;
@property (retain) NSArray *conditionalButtonModels;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
