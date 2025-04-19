@class NSAttributedString;

@interface MSVLyricsTextElement : MSVLyricsElement

@property (copy, nonatomic) NSAttributedString *lyricsText;
@property (nonatomic) BOOL keepParentheses;

- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
