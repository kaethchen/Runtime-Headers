@class NSString, PXAssistantStepContext, PXAssistantActivityItem, NSMutableArray, PXAssistantButtonItem;
@protocol PXAssistantNavigationControllerDelegate, PXAssistantViewControllerDelegate;

@interface PXAssistantNavigationController : PXAssistantTemplateContainerViewController <PXChangeObserver, PXAssistantViewController> {
    PXAssistantStepContext *_stepContext;
}

@property (retain, nonatomic) PXAssistantActivityItem *activityItem;
@property (retain, nonatomic) PXAssistantButtonItem *firstButtonItem;
@property (retain, nonatomic) PXAssistantButtonItem *secondButtonItem;
@property (retain, nonatomic) PXAssistantButtonItem *thirdButtonItem;
@property (readonly, nonatomic) NSMutableArray *stepContexts;
@property (weak, nonatomic) id<PXAssistantNavigationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateButtonsForActivityStatus;
- (void)_setStepContext:(id)a0;
- (void)_updateButton:(id)a0 withItem:(id)a1;
- (id)popStepContextAnimated:(BOOL)a0;
- (void)popToStepContext:(id)a0 animated:(BOOL)a1;
- (void)pushStepContext:(id)a0 animated:(BOOL)a1;

@end
