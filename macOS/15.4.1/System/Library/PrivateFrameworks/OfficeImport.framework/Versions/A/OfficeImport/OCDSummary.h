@class NSString;

@interface OCDSummary : NSObject {
    NSString *mTitle;
    NSString *mAuthor;
    NSString *mKeywords;
    NSString *mComments;
    NSString *mHyperlinkBase;
}

@property (retain) NSString *subject;
@property (retain) NSString *company;

- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)keywords;
- (void)setKeywords:(id)a0;
- (id)title;
- (id)author;
- (id)comments;
- (void)setComments:(id)a0;
- (void)setAuthor:(id)a0;
- (id)hyperlinkBase;
- (void)setHyperlinkBase:(id)a0;

@end
