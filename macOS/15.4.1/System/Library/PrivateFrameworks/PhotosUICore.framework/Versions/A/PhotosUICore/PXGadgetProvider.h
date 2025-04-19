@class NSArray, NSString;
@protocol PXGadgetDelegate, PXGadgetProviderDelegate;

@interface PXGadgetProvider : NSObject <PXMutableGadgetProvider, PXGadgetDelegate>

@property (copy) NSArray *gadgets;
@property (nonatomic) BOOL isPerformingChanges;
@property (nonatomic) BOOL invalidGadgets;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) id<PXGadgetProviderDelegate> delegate;
@property (weak, nonatomic) id<PXGadgetDelegate> nextGadgetResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)dismissAlert:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (void)generateGadgets;
- (void)_teardownGadget:(id)a0;
- (void)addGadgets:(id)a0;
- (void)beginSheetForGadgetViewController:(id)a0;
- (void)dismissGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)endSheetForGadgetViewController:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)gadget:(id)a0 animateChanges:(id /* block */)a1;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (BOOL)gadget:(id)a0 transitionToViewController:(id)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)gadgetViewControllerHostingGadget:(id)a0;
- (void)insertGadgets:(id)a0 atIndexes:(id)a1;
- (void)loadDataForGadgets;
- (void)loadDataForPriority;
- (void)pauseLoadingRemainingData;
- (void)presentAlert:(id)a0 withCompletion:(id /* block */)a1;
- (void)presentGadgetViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)presentationEnvironmentForGadget:(id)a0;
- (void)removeAllGadgets;
- (void)removeGadgets:(id)a0;
- (void)removeGadgetsAtIndexes:(id)a0;
- (void)startLoadingRemainingData;

@end
