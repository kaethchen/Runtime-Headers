@class UXView, PXToastConfiguration, NSLayoutConstraint;

@interface PXToast : NSObject {
    PXToastConfiguration *_configuration;
}

@property (retain, nonatomic) NSLayoutConstraint *onscreenConstraint;
@property (retain, nonatomic) NSLayoutConstraint *offscreenConstraint;
@property (retain, nonatomic) UXView *view;
@property (nonatomic) BOOL isShown;
@property (nonatomic) double bottomMargin;

+ (id)show:(id /* block */)a0;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)dismissAnimated:(BOOL)a0;
- (void)_present;
- (void)_dismissAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)dismissAnimated:(BOOL)a0 afterDelay:(double)a1;

@end
