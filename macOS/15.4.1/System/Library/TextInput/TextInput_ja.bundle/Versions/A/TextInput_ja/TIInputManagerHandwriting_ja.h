@interface TIInputManagerHandwriting_ja : TIInputManagerHandwriting

+ (Class)wordSearchClass;

- (int)recognitionMode;
- (id)recognitionLanguage;
- (id)handleKeyboardInput:(id)a0;
- (void *)initImplementation;
- (void)loadFavoniusTypingModel;

@end
