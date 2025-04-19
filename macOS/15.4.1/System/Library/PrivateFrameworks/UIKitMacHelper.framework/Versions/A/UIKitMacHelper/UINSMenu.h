@class NSString, NSArray, UIWindow;

@interface UINSMenu : NSObject <UINSMenu>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *items;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long presentationStyle;
@property (nonatomic) long long selectionMode;
@property (weak, nonatomic) UIWindow *sourceUIWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } rectInUIWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
