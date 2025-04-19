@class _MKUILabel;

@interface MKPlaceInfoPhoneNumberView : MKPlaceInfoContactRowView {
    _MKUILabel *_optsOutOfAdsView;
}

@property (nonatomic) BOOL optsOutOfAds;

- (void).cxx_destruct;
- (id)_icon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)analyticsTarget;
- (id)_iconAccessibilityLabel;
- (Class)_labeledValueExpectedValueType;
- (id)_valueString;
- (id)formatPhoneNumber:(id)a0;

@end
