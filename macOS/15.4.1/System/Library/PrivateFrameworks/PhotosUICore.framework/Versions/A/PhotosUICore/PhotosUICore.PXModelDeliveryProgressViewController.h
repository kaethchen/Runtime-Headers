@interface PhotosUICore.PXModelDeliveryProgressViewController : UXViewController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_progressView;
    void /* unknown type, empty encoding */ progressState;
    void /* unknown type, empty encoding */ progressConfiguration;
    void /* unknown type, empty encoding */ progressHostingViewController;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)setErrorState:(long long)a0;
- (void)reportProgress:(double)a0 stage:(unsigned long long)a1;
- (void)setIsiPadConfiguration:(BOOL)a0;

@end
