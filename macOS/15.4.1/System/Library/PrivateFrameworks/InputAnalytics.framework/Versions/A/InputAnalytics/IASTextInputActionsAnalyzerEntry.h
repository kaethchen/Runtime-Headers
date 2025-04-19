@interface IASTextInputActionsAnalyzerEntry : NSObject

@property long long netCharacters;
@property long long userRemovedCharacters;
@property long long netEmojiCharacters;
@property long long userRemovedEmojiCharacters;
@property long long inputActions;

+ (id)generateAnalyzerEntryFromAction:(id)a0;

- (void)increaseWithEntry:(id)a0;
- (BOOL)isAllZeroes;

@end
