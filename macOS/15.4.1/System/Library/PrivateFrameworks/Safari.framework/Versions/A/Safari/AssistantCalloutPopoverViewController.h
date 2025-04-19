@class AssistantCalloutPopoverView;
@protocol AssistantCalloutPopoverViewControllerDelegate;

@interface AssistantCalloutPopoverViewController : NSViewController {
    AssistantCalloutPopoverView *_calloutPopoverView;
}

@property (weak, nonatomic) id<AssistantCalloutPopoverViewControllerDelegate> delegate;
@property (copy, nonatomic) id /* block */ assistantCalloutPopoverAction;

- (void).cxx_destruct;
- (void)loadView;
- (void)calloutWasClicked;
- (void)setTitle:(id)a0 withSymbol:(id)a1;

@end
