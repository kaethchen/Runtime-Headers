@interface CoreSuggestionsUI.SGWalletPassSuggestion : NSObject <SGSuggestion, SGSuggestionCategory, SGSuggestionExtensions> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ passDictionary;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ realtime;
    void /* unknown type, empty encoding */ passViewManager;
    void /* unknown type, empty encoding */ bannerForVisionDevice;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ suggestionDelegate;

- (id)init;
- (void).cxx_destruct;
- (id)suggestionTitle;
- (long long)suggestionActionButtonType;
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
- (id)initWithRealtimeWalletPass:(id)a0;
- (id)realtimeSuggestion;
- (long long)suggestionCategoryActionButtonType;

@end
