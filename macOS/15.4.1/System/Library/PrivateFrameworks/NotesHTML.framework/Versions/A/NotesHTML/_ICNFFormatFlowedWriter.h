@class NSString, NSMutableString, NSAttributedString, NSMutableAttributedString;

@interface _ICNFFormatFlowedWriter : NSObject {
    NSMutableString *_outputString;
    NSMutableString *_quotedString;
    NSMutableString *_lineString;
    NSMutableAttributedString *_attributedString;
}

@property (readonly, copy, nonatomic) NSAttributedString *inputAttributedString;
@property (readonly, nonatomic) unsigned long long encoding;
@property (copy, nonatomic) NSString *inputString;
@property (nonatomic) BOOL addedTrailingSpaces;
@property (nonatomic) unsigned long long quoteLevel;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } paragraphRange;
@property (readonly, copy, nonatomic) NSString *outputString;
@property (readonly, copy, nonatomic) NSString *quotedString;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_findLineBreakInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 maxCharWidthCount:(unsigned long long)a1 endIsURL:(BOOL)a2;
- (void)_outputQuotedParagraph;
- (id)initWithAttributedString:(id)a0 encoding:(unsigned long long)a1;

@end
