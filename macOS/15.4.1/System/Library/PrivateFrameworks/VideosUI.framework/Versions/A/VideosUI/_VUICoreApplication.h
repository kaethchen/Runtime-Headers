@class NSString, NSDictionary, VUITVApplicationControllerContext, NSWindow;

@interface _VUICoreApplication : NSObject <VUIApplication>

@property (readonly, weak, nonatomic) VUITVApplicationControllerContext *launchContext;
@property (copy, nonatomic) NSDictionary *javaScriptLaunchOptions;
@property (weak, nonatomic) NSWindow *keyWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)initWithLaunchContext:(id)a0;
- (id)appLaunchParams;
- (id)appJSURL;
- (BOOL)shouldIgnoreJSValidation;
- (id)userDefaultsStorage;
- (id)appTraitCollection;

@end
