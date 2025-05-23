@class VUIUpNextButtonProperties, NSString;

@interface VUIUpNextButton : VUIButton <VUIUpNextButtonProtocol>

@property (retain, nonatomic) VUIUpNextButtonProperties *properties;
@property (copy, nonatomic) id /* block */ stateDidChangeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithType:(unsigned long long)a0 interfaceStyle:(unsigned long long)a1;
- (void)selectButtonAction:(id)a0;
- (void)upNextStateChangedToAdded;
- (void)upNextStateChangedToRemoved;
- (void)updateAccessibilityIdentifierAfterStateChanged;
- (void)updateAccessibilityLabelAfterStateChanged;

@end
