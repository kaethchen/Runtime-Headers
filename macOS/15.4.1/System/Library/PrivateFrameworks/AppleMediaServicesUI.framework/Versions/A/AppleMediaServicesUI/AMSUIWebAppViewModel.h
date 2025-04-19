@class NSString, NSURL;

@interface AMSUIWebAppViewModel : NSObject <AMSUIWebModelInterface>

@property (retain) NSString *accessibilityLabel;
@property (retain) NSString *bundleIdentifier;
@property (retain) NSURL *iconURL;
@property (retain) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)validateJSObject:(id)a0;

- (void).cxx_destruct;
- (id)_makeBarButtonItemView;
- (id)iconWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)initWithJSObject:(id)a0 context:(id)a1;

@end
