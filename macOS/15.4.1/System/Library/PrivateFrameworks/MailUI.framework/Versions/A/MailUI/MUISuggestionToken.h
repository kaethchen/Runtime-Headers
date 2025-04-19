@class _CSSuggestionToken, NSString, NSArray, NSImage;

@interface MUISuggestionToken : NSObject

@property (readonly, nonatomic) _CSSuggestionToken *csToken;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *scopeName;
@property (readonly, nonatomic) NSArray *scopeNames;
@property (readonly, nonatomic) NSImage *image;
@property (nonatomic) unsigned long long selectedScopeIndex;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } replacementRange;
@property (readonly, nonatomic) BOOL hasMultipleScopes;

+ (id)csTokensFromMailSuggestionTokens:(id)a0;
+ (id)suggestionTokenWithTitle:(id)a0;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (id)initWithCSToken:(id)a0;

@end
