@class NSString, UXViewController, UXView;

@interface KHEditorTitleContext : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *detailTitle;
@property (retain, nonatomic) NSString *toolTip;
@property (retain, nonatomic) UXViewController *titleAccessoryViewController;
@property (retain, nonatomic) UXView *titleAccessoryView;

+ (id)contextWithTitle:(id)a0 subtitle:(id)a1 detailTitle:(id)a2 toolTip:(id)a3;

- (void).cxx_destruct;

@end
