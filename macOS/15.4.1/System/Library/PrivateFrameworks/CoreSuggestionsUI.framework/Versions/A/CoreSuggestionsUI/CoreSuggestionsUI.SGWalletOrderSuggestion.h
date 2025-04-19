@interface CoreSuggestionsUI.SGWalletOrderSuggestion : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ orderHelpers;
    void /* unknown type, empty encoding */ orderBundleURL;
    void /* unknown type, empty encoding */ orderDictionary;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ realtimeOrderSuggestion;
    void /* unknown type, empty encoding */ bannerForVisionDevice;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ suggestionDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)suggestionTitle;
- (long long)suggestionActionButtonType;
- (id)suggestionAttributedSubtitle;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id)suggestionPrimaryAction;
- (id)suggestionPrimaryActionViewController;
- (id)suggestionSubtitle;
- (id)initWithRealtimeWalletOrder:(id)a0;
- (id)realtimeSuggestion;
- (long long)suggestionCategoryActionButtonType;

@end
