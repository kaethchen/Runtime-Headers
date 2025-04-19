@class ABGroupListController, NSArray, NSPasteboard;

@interface ABGroupDragScope : NSObject

@property (readonly) ABGroupListController *viewController;
@property (readonly) NSArray *entries;
@property (readonly) NSPasteboard *pasteboard;

- (void).cxx_destruct;
- (id)initWithListViewController:(id)a0 entries:(id)a1 pasteboard:(id)a2;

@end
