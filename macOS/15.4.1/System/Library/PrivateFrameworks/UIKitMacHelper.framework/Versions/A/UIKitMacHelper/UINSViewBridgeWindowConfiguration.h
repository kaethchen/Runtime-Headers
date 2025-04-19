@class NSUUID, NSString;

@interface UINSViewBridgeWindowConfiguration : NSObject

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentRect;
@property (retain, nonatomic) NSUUID *extensionIdentifier;
@property (nonatomic) long long userInterfaceIdiom;
@property (retain, nonatomic) NSString *viewControllerClassName;
@property (retain, nonatomic) NSString *storyboardName;
@property (nonatomic) BOOL requiresExtensionContext;
@property (copy, nonatomic) id /* block */ didCreateContentViewController;
@property (copy, nonatomic) id /* block */ contextDidChangeHandler;

- (id)init;
- (void).cxx_destruct;
- (id)windowController;

@end
