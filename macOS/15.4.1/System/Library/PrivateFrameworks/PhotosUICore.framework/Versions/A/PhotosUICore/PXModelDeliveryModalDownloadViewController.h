@class UXLabel, NSLayoutConstraint, PXModelDeliveryProgressObjCViewController;

@interface PXModelDeliveryModalDownloadViewController : UXViewController

@property (retain, nonatomic) PXModelDeliveryProgressObjCViewController *progressController;
@property (retain, nonatomic) UXLabel *descriptionLabel;
@property (retain, nonatomic) NSLayoutConstraint *descriptionAndProgressBind;
@property (copy, nonatomic) id /* block */ cancelBlock;
@property (copy, nonatomic) id /* block */ revertBlock;
@property (nonatomic) BOOL allowForRevert;

- (id)init;
- (void).cxx_destruct;
- (void)setErrorState:(id)a0;
- (void)cancelAction:(id)a0;
- (void)createViewsWithCancelBlock:(id /* block */)a0 revertBlock:(id /* block */)a1;
- (void)reportProgress:(double)a0 stage:(unsigned long long)a1;
- (void)clearErrorState;
- (void)revertAction:(id)a0;

@end
