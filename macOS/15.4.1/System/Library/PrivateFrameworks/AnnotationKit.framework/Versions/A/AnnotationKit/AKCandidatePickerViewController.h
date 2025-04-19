@class AKShapesGridViewController, NSArray, AKController, NSStackView, NSButton;

@interface AKCandidatePickerViewController : NSViewController

@property (retain) NSStackView *stackView;
@property (retain) AKShapesGridViewController *shapesPicker;
@property (retain) NSArray *annotationImages;
@property (weak) AKController *controller;
@property (retain) NSArray *items;
@property (retain) NSButton *closeButton;
@property long long orientation;
@property (copy) id /* block */ actionBlock;
@property (copy) id /* block */ potentialActionBlock;

+ (id)_imagesForAnnotations:(id)a0;

- (void).cxx_destruct;
- (void)loadView;
- (BOOL)setSelectionIndexes:(id)a0;
- (void)closePicker:(id)a0;
- (id)initWithController:(id)a0 items:(id)a1 annotations:(id)a2 orientation:(long long)a3;

@end
