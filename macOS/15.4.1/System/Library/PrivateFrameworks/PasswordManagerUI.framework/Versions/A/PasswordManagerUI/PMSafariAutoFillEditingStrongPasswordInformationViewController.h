@class NSString, NSURL;

@interface PMSafariAutoFillEditingStrongPasswordInformationViewController : NSViewController <PMSafariAutoFillStrongPasswordIntroductionView> {
    void /* unknown type, empty encoding */ _anywebsiteTitle;
    void /* unknown type, empty encoding */ _anyFormURL;
    void /* unknown type, empty encoding */ _anyIconController;
    void /* unknown type, empty encoding */ configurationProvider;
    void /* unknown type, empty encoding */ imageProvider;
}

@property (class, nonatomic, readonly) BOOL shouldShowView;

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } contentSize;
@property (nonatomic, copy) NSString *websiteTitle;
@property (nonatomic, copy) NSURL *formURL;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillAppear;
- (id)initWithWebsiteTitle:(id)a0 url:(id)a1;

@end
