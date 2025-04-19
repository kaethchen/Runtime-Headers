@class NSObject;
@protocol TSearchScopeSliceControllerDelegate;

@interface FI_TSearchScopeSliceController : FI_TViewController

@property (weak, nonatomic) NSObject<TSearchScopeSliceControllerDelegate> *scopeSliceDelegate;

- (id)nibName;
- (void)setScopePlusMinusButtonEnabled:(BOOL)a0;
- (id)currentScopeString;
- (unsigned long long)scopeSelection;
- (id)scopeSlice;
- (void)setButtonTitles:(const void *)a0 andToolTips:(const void *)a1;
- (void)setSaveButtonEnabled:(BOOL)a0;
- (void)setScopePlusMinusButtonTitle:(BOOL)a0;
- (void)setScopeSelection:(unsigned long long)a0;

@end
