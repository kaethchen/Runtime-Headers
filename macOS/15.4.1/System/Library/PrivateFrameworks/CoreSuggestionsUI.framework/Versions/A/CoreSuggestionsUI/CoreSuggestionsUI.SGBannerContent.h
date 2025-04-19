@class NSString, NSArray;

@interface CoreSuggestionsUI.SGBannerContent : NSObject {
    void /* unknown type, empty encoding */ bannerForVisionDevice;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subtitle;
    void /* unknown type, empty encoding */ images;
    void /* unknown type, empty encoding */ actionTitle;
    void /* unknown type, empty encoding */ iconSFSymbols;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) void /* unknown type, empty encoding */ attributedTitle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ attributedSubtitle;
@property (nonatomic) void /* unknown type, empty encoding */ accessoryType;
@property (nonatomic, copy) NSArray *images;
@property (nonatomic, copy) NSString *actionTitle;
@property (nonatomic, retain) void /* unknown type, empty encoding */ suggestion;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ primaryActionButtonWidth;
@property (nonatomic) void /* unknown type, empty encoding */ closeButtonWidth;
@property (nonatomic) void /* unknown type, empty encoding */ actionButtonType;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundVisualEffectView;
@property (nonatomic, retain) void /* unknown type, empty encoding */ backgroundColor;
@property (nonatomic, retain) void /* unknown type, empty encoding */ bannerDivider;
@property (nonatomic) void /* unknown type, empty encoding */ suggestionCategorySupportsBatchDismissal;
@property (nonatomic, retain) void /* unknown type, empty encoding */ primaryAction;
@property (nonatomic, retain) void /* unknown type, empty encoding */ dismissAction;
@property (nonatomic) void /* unknown type, empty encoding */ closeButtonXAnchorOffset;
@property (nonatomic) void /* unknown type, empty encoding */ prominentActionButton;
@property (nonatomic, copy) NSArray *iconSFSymbols;

- (id)init;
- (void).cxx_destruct;

@end
