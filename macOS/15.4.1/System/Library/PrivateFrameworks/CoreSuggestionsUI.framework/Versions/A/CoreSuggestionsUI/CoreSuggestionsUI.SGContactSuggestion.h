@interface CoreSuggestionsUI.SGContactSuggestion : NSObject <SGSuggestion, SGSuggestionCategory> {
    void /* unknown type, empty encoding */ kStringKeyLabeledValueFormat;
    void /* unknown type, empty encoding */ realtimeContact;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ contactViewController;
    void /* unknown type, empty encoding */ bannerForVisionDevice;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ suggestionDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)suggestionTitle;
- (id)suggestionImage;
- (long long)suggestionActionButtonType;
- (id)suggestionCategory;
- (id)suggestionCategoryIconSFSymbol;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id)suggestionDismissAction;
- (id)suggestionIconSFSymbol;
- (id)suggestionPrimaryAction;
- (id)suggestionPrimaryActionViewController;
- (id)suggestionSubtitle;
- (void)confirm:(BOOL)a0 suggestion:(id)a1 completion:(id /* block */)a2;
- (id)initWithSgContact:(id)a0;
- (id)mailingAddressFromPostalAddress:(id)a0;
- (id)realtimeSuggestion;
- (long long)suggestionCategoryActionButtonType;

@end
