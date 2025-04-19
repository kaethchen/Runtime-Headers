@class NSString, NSButton;
@protocol UnifiedFieldButtonHostViewControllerDelegate, AccordionHostableExpansionRequestHandler;

@interface UnifiedFieldButtonHostViewController : NSViewController <AccordionHostable> {
    NSButton *_expandedButton;
    NSButton *_collapsedButton;
}

@property (weak, nonatomic) id<UnifiedFieldButtonHostViewControllerDelegate> delegate;
@property (nonatomic) BOOL enabled;
@property (weak, nonatomic) id<AccordionHostableExpansionRequestHandler> expansionRequestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)accordionHost:(id)a0 viewWillCollapse:(BOOL)a1;
- (void)_updateExpandedButtonHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)accordionHost:(id)a0 viewWasInserted:(BOOL)a1 viewDidExpand:(BOOL)a2;
- (void)accordionHost:(id)a0 viewWillBeInserted:(BOOL)a1 viewWillExpand:(BOOL)a2;
- (void)accordionHost:(id)a0 viewWillBeRemoved:(BOOL)a1;
- (void)accordionHost:(id)a0 viewWillExpand:(BOOL)a1;
- (void)handleButtonPress:(id)a0;
- (id)initWithCollapsedButton:(id)a0;

@end
