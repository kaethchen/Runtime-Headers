@class NSString, NSDictionary, iCloudAccountDetailsWebTabView;

@interface AOSUISpyglassPaneWebViewController : NSViewController <AOSUISpyglassPaneWebViewControllerDelegate> {
    NSDictionary *_userInfo;
}

@property (retain, nonatomic) iCloudAccountDetailsWebTabView *detailWebViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (void)loadView;
- (void)didSelect;
- (BOOL)shouldSelect;

@end
