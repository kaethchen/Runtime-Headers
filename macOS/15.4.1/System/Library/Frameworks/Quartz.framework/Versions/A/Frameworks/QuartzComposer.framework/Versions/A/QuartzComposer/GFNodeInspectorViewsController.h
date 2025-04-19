@class NSView, GFNode, NSTextField;

@interface GFNodeInspectorViewsController : NSObject {
    NSView *_informationView;
    NSTextField *_titleField;
    NSTextField *_noteField;
    NSTextField *_nameField;
    NSTextField *_descriptionField;
    GFNode *_targetNode;
}

+ (id)sharedController;

- (id)init;
- (void)__stateUpdated:(id)a0;
- (void)noteEdited:(id)a0;
- (void)resetInspectorViews;
- (void)resetTitle:(id)a0;
- (id)setupViewsForNode:(id)a0;
- (void)titleEdited:(id)a0;

@end
