@class NSDictionary, NSString, AMSUIWebActivityIndicatorModel;
@protocol AMSUIWebActionRunnable;

@interface AMSUIWebButtonModel : NSObject <AMSUIWebModelInterface>

@property (retain) NSDictionary *underlyingJSObject;
@property (retain) NSString *accessibilityLabel;
@property (retain) id<AMSUIWebActionRunnable> action;
@property (copy) id /* block */ actionBlock;
@property (retain) AMSUIWebActivityIndicatorModel *activityIndicator;
@property BOOL bold;
@property BOOL enabled;
@property (retain) NSString *identifier;
@property (retain) NSString *keyEquivalent;
@property (retain) NSString *title;
@property long long style;
@property (retain) NSString *systemImageName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)_barButtonItemStyle;
- (id)_imageForButtonWithNavStyle:(long long)a0;
- (id)_makeActivityIndicatorView;
- (id)createDialogAction;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
