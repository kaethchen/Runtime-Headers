@class NSTextField, NSArray, NSStepper, NSArrayController;

@interface KHPhotoPrintOptionsController : UXViewController

@property (readonly, nonatomic) NSArrayController *layoutsController;
@property (readonly, nonatomic) NSTextField *copiesLabel;
@property (readonly, nonatomic) NSTextField *copiesField;
@property (readonly, nonatomic) NSStepper *copiesStepper;
@property (retain, nonatomic) NSArray *frames;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
