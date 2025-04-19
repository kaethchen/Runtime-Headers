@class NSString, NSDictionary, NSArray, NSAttributedString;

@interface TCTextCompositionOutput : NSObject <NSCopying, NSSecureCoding> {
    NSAttributedString *_rewrittenAttributedString;
    NSArray *_inputLengths;
    NSArray *_outputLengths;
    NSArray *_characterExpansions;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *rewrittenString;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (readonly, copy) NSDictionary *options;

+ (id)stubbedTableStringFromString:(id)a0 tagger:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateRewrittenAttributedStringsWithInput:(id)a0 usingBlock:(id /* block */)a1;
- (void)_addDelimiterRunsForParagraph:(id)a0 delimiterRuns:(id)a1 openingDelimeterRuns:(id)a2 closingDelimiterRuns:(id)a3;
- (void)_addHTMLDelimiterRunsForParagraph:(id)a0 delimiterRuns:(id)a1 openingDelimeterRuns:(id)a2 closingDelimiterRuns:(id)a3;
- (id)_closingHTMLTags;
- (id)_delimiterCharacterStrings;
- (id)_delimiterStrings;
- (id)_headingFormattingResultsForString:(id)a0;
- (id)_inlineFormattingResultsForString:(id)a0;
- (id)_inlineHTMLFormattingResultsForString:(id)a0;
- (id)_openingHTMLTags;
- (void)_parseOutput:(id)a0 blockTypeArray:(id)a1 rangeArray:(id)a2;
- (void)_parseTablesOutput:(id)a0 headerArray:(id)a1 rowArray:(id)a2;
- (id)_tableRowForParagraph:(id)a0;
- (id)attributedStringByApplyingHeadingFormattingToAttributedString:(id)a0;
- (id)attributedStringByApplyingInlineFormattingToAttributedString:(id)a0;
- (id)attributedStringByApplyingInlineHTMLFormattingToAttributedString:(id)a0;
- (id)attributedStringForMixedOutput:(id)a0 input:(id)a1 tagger:(id)a2 parseLists:(BOOL)a3 parseTables:(BOOL)a4 error:(id *)a5;
- (id)attributedStringForOrderedListOutput:(id)a0 input:(id)a1 tagger:(id)a2 error:(id *)a3;
- (id)attributedStringForResults:(id)a0 input:(id)a1;
- (id)attributedStringForTablesOutput:(id)a0 input:(id)a1 textAlignmentArray:(id)a2 tagger:(id)a3 error:(id *)a4 textModificationBlock:(id /* block */)a5;
- (id)attributedStringForUnorderedListOutput:(id)a0 input:(id)a1 handleTitles:(BOOL)a2 strictFormatting:(BOOL)a3 allowAlternatives:(BOOL)a4 tagger:(id)a5 error:(id *)a6;
- (id)characterExpansions;
- (long long)formatContentForOpenEndedString:(id)a0 paragraphArray:(id)a1;
- (id)initWithInput:(id)a0 inputString:(id)a1 openEndedString:(id)a2 whitespaceString:(id)a3 outputFormatOptions:(unsigned long long)a4 resultOptions:(id)a5 tagger:(id)a6 error:(id *)a7;
- (id)initWithInput:(id)a0 inputString:(id)a1 rewrittenString:(id)a2 outputFormatOptions:(unsigned long long)a3 resultOptions:(id)a4 tagger:(id)a5;
- (id)initWithInput:(id)a0 listString:(id)a1 resultOptions:(id)a2 tagger:(id)a3 error:(id *)a4;
- (id)initWithInput:(id)a0 results:(id)a1 resultOptions:(id)a2;
- (id)initWithInput:(id)a0 rewrittenString:(id)a1;
- (id)initWithInput:(id)a0 rewrittenString:(id)a1 resultOptions:(id)a2 tagger:(id)a3;
- (id)initWithInput:(id)a0 tableString:(id)a1 resultOptions:(id)a2 tagger:(id)a3 error:(id *)a4 textModificationBlock:(id /* block */)a5;
- (id)initWithInput:(id)a0 takeawayString:(id)a1 resultOptions:(id)a2 tagger:(id)a3 error:(id *)a4;
- (id)initWithRewrittenAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inputLengths:(id)a2 outputLengths:(id)a3 options:(id)a4;
- (id)initWithRewrittenAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 inputLengths:(id)a2 outputLengths:(id)a3 options:(id)a4 characterExpansions:(id)a5;
- (id)inputLengths;
- (id)outputLengths;
- (id)prefixForListItemNumber:(unsigned long long)a0 level:(unsigned long long)a1 ordered:(BOOL)a2;
- (id)rewrittenAttributedString;
- (id)rewrittenAttributedStringWithInput:(id)a0;
- (id)tablesOutputForParagraphArray:(id)a0 textAlignmentArray:(id)a1;

@end
