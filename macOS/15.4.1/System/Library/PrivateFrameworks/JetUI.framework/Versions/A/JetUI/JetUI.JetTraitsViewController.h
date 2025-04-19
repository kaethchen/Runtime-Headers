@class JUTraitCollection;

@interface JetUI.JetTraitsViewController : NSViewController <JetUI.JetTraitEnvironment>

@property (nonatomic, readonly) JUTraitCollection *jet_traitCollection;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)_viewTraitCollectionDidChange:(id)a0;
- (void)jet_traitCollectionDidChange:(id)a0;

@end
