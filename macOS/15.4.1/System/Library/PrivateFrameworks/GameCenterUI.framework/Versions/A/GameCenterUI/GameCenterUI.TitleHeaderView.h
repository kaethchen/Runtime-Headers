@class NSString;

@interface GameCenterUI.TitleHeaderView : GameCenterUI.BaseCollectionReusableView {
    void /* unknown type, empty encoding */ titleObservation;
    void /* unknown type, empty encoding */ titleAccessoryHiddenObservation;
    void /* unknown type, empty encoding */ accessoryHiddenObservation;
    void /* unknown type, empty encoding */ titleAccessory;
    void /* unknown type, empty encoding */ subtitleAccessory;
    void /* unknown type, empty encoding */ accessoryType;
    void /* unknown type, empty encoding */ accessoryAction;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ cachedIntrinsicContentSize;
}

@property (class, nonatomic, readonly) struct CGSize { double x0; double x1; } iconSize;
@property (class, nonatomic, readonly) double accessoryMargin;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ titleLabelView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ subtitleLabelView;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ separatorView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ titleAccessoryView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ subtitleAccessoryView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ accessoryView;
@property (nonatomic, copy) id /* block */ accessoryAction;
@property (nonatomic) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } layoutMargins;
@property (nonatomic, retain) void /* unknown type, empty encoding */ iconArtworkView;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;

+ (struct CGSize { double x0; double x1; })sizeFitting:(struct CGSize { double x0; double x1; })a0 forTitle:(id)a1 subtitle:(id)a2 kind:(long long)a3 accessorySize:(struct CGSize { double x0; double x1; })a4 layoutMargins:(struct NSEdgeInsets { double x0; double x1; double x2; double x3; })a5 inTraitEnvironment:(id)a6;

- (void)dealloc;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)accessibilityTitleUIElement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateIntrinsicContentSize;
- (void)jet_traitCollectionDidChange:(id)a0;
- (void)didTapWithAccessoryView:(id)a0;

@end
