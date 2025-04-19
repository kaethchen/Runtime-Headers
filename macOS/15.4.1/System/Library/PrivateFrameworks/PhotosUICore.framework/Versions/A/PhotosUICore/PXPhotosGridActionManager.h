@class PXPhotosViewModel, NSDictionary;
@protocol PXPhotosGridActionPerformerInformationProviderDelegate;

@interface PXPhotosGridActionManager : PXActionManager

@property (readonly, weak, nonatomic) PXPhotosViewModel *viewModel;
@property (readonly, nonatomic) NSDictionary *actionPerformersByType;
@property (weak, nonatomic) id<PXPhotosGridActionPerformerInformationProviderDelegate> userInfoDelegate;

+ (id)actionsWithActionPerformers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (BOOL)canPerformActionType:(id)a0;
- (id)actionPerformerForActionType:(id)a0;
- (BOOL)supportsActionType:(id)a0;
- (id)localizedTitleForActionType:(id)a0 useCase:(unsigned long long)a1;

@end
