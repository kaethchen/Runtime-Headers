@class NSString, PXAssistantActivityItem, PXAssistantTemplateView, PXAssistantButtonItem;
@protocol PXAssistantViewControllerDelegate;

@interface PXAssistantTemplateViewController : NSViewController <PXAssistantViewController>

@property (readonly, nonatomic) PXAssistantTemplateView *templateView;
@property (readonly, nonatomic) PXAssistantActivityItem *activityItem;
@property (readonly, nonatomic) PXAssistantButtonItem *firstButtonItem;
@property (readonly, nonatomic) PXAssistantButtonItem *secondButtonItem;
@property (readonly, nonatomic) PXAssistantButtonItem *thirdButtonItem;
@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)firstButtonAction:(id)a0;
- (void)secondButtonAction:(id)a0;
- (void)stepBackwardInAssistant;
- (void)stepForwardInAssistant;
- (void)thirdButtonAction:(id)a0;

@end
