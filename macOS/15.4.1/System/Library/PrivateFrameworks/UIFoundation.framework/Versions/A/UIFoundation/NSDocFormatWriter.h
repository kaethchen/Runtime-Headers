@class NSRunStorage, NSDictionary, NSMutableData, NSAttributedString, NSMutableArray;

@interface NSDocFormatWriter : NSObject <DocFormatAddressValidation> {
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSMutableData *_primaryData;
    NSMutableData *_secondaryData;
    NSMutableData *_primaryIndex;
    NSMutableData *_secondaryIndex;
    NSMutableData *_tableOfContents;
    NSMutableData *_documentData;
    NSMutableData *_tableData;
    NSMutableData *_charData;
    NSMutableData *_parData;
    NSMutableData *_summaryInfoData;
    NSMutableData *_documentSummaryInfoData;
    NSMutableArray *_fontArray;
    NSRunStorage *_charFlags;
    BOOL _needsTrailingBreak;
}

- (void)dealloc;
- (id)initWithAttributedString:(id)a0;
- (void)_writeCharacterData;
- (void)_writeDocumentData;
- (void)_writeInfoStringForKey:(id)a0 number:(unsigned int)a1 headerData:(id)a2 contentsData:(id)a3;
- (void)_writeParagraphData;
- (void)_writeSummaryData:(BOOL)a0;
- (id)docFormatData;
- (void)setDocumentAttributes:(id)a0;
- (BOOL)validateAddress:(const char *)a0 numberOfBytes:(unsigned long long)a1;

@end
