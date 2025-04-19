@class PXLibraryFilterState;

@interface PXSharedLibraryAssistantHowToViewController : PXAssistantTemplateViewController

@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;

- (void).cxx_destruct;
- (void)loadView;
- (void)_updateButtonItems;
- (void)firstButtonAction:(id)a0;
- (id)initWithLibraryFilterState:(id)a0;

@end
