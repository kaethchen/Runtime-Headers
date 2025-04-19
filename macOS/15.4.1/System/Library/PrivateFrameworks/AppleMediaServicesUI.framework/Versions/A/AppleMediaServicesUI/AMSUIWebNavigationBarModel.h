@class NSString, NSArray, AMSUIWebBarButtonItemModel;

@interface AMSUIWebNavigationBarModel : NSObject <AMSUIWebModelInterface>

@property (retain) AMSUIWebBarButtonItemModel *accessoryBarButtonItemModel;
@property (retain) NSString *backButtonTitle;
@property (retain) NSString *backgroundColor;
@property long long backgroundStyle;
@property BOOL hidesBackButton;
@property (readonly) BOOL includesLeftItems;
@property (readonly) BOOL includesRightItems;
@property (retain) AMSUIWebBarButtonItemModel *leftBarButtonItemModel;
@property (retain) NSArray *otherBarButtonItemModels;
@property (retain) AMSUIWebBarButtonItemModel *rightBarButtonItemModel;
@property long long style;
@property (retain) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
