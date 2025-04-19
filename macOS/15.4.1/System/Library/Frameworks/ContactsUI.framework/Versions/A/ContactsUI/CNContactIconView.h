@class NSView, NSString;
@protocol CNContactIconUpdating;

@interface CNContactIconView : NSView <CNContactIconUpdating>

@property (retain, nonatomic) NSView<CNContactIconUpdating> *representativeView;
@property (nonatomic) long long iconViewAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)representativeViewClassForViewModel:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (void)setCircular:(BOOL)a0;
- (void)setupRepresentativeViewForViewModel:(id)a0;
- (void)viewModelDidUpdate:(id)a0;

@end
