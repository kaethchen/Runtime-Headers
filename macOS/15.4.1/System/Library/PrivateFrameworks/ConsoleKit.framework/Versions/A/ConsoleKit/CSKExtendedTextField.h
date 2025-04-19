@class NSString;
@protocol CSKExtendedTextFieldDelegate;

@interface CSKExtendedTextField : NSTextField

@property (nonatomic) BOOL showsAlternate;
@property (retain, nonatomic) NSString *defaultStringValue;
@property (retain, nonatomic) NSString *alternateStringValue;
@property (weak, nonatomic) id<CSKExtendedTextFieldDelegate> extraDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)showAlternateStringValue:(BOOL)a0;

@end
