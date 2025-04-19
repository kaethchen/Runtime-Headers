@class NSError;

@interface DMTErrorLogViewController : NSViewController

@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (void)loadView;
- (void)doneButtonClicked:(id)a0;

@end
