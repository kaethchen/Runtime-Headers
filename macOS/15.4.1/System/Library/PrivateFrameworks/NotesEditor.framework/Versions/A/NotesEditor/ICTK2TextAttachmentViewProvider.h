@class ICSearchResultRegexMatchFinder;
@protocol NSTextLocation;

@interface ICTK2TextAttachmentViewProvider : NSTextAttachmentViewProvider

@property (retain, nonatomic) id<NSTextLocation> updatedLocationForRecycledViewProvider;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;

- (void).cxx_destruct;
- (id)location;
- (void)setLocation:(id)a0;
- (id)initWithTextAttachment:(id)a0 parentView:(id)a1 textLayoutManager:(id)a2 location:(id)a3;
- (void)loadView;

@end
