@class MUIRecategorizationViewModel;

@interface MUIRecategorizationMenuController : NSObject <NSMenuDelegate>

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, readonly) MUIRecategorizationViewModel *viewModel;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)menuNeedsUpdate:(id)a0;
- (id)menuForSourceType:(long long)a0;
- (void)updateCategoryBucket:(id)a0;

@end
