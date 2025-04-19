@class NSArray, AKController, NSMutableDictionary;

@interface AKHighlightAttributesViewController : NSViewController

@property (weak) AKController *controller;
@property (retain) NSArray *itemTags;
@property (retain) NSMutableDictionary *partIndexesToTags;
@property (copy) id /* block */ actionBlock;

- (void).cxx_destruct;
- (void)loadView;
- (void)_labelViewAction:(id)a0;
- (id)initWithController:(id)a0 items:(id)a1;

@end
