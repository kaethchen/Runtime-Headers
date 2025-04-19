@class NSArray;

@interface CPKSuggestedEmojiResult : NSObject

@property struct _NSRange { unsigned long long location; unsigned long long length; } textRange;
@property (retain) NSArray *emojiTokens;
@property (retain) NSArray *stickers;
@property (readonly) unsigned long long suggestionCount;

+ (id)resultWithTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 emojiTokens:(id)a1;
+ (id)resultWithTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 emojiTokens:(id)a1 stickers:(id)a2;
+ (id)resultWithTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 stickers:(id)a1;

- (void)dealloc;
- (id)description;

@end
