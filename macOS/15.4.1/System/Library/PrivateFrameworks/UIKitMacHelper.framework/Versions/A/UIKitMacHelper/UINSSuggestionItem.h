@class NSImage, NSAttributedString;

@interface UINSSuggestionItem : NSObject

@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) NSImage *image;
@property (copy, nonatomic) id /* block */ didSelectCallback;

- (void).cxx_destruct;
- (id)nsSuggestionItem;

@end
