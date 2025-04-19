@class NSString, PXAssistantTemplateViewController;

@interface PXAssistantStepContext : PXObservable

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) PXAssistantTemplateViewController *viewController;

- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (id)initWithIdentifier:(id)a0 viewController:(id)a1;

@end
