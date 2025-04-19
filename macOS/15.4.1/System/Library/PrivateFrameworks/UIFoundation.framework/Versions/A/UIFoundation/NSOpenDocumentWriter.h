@class NSMutableArray, NSMutableDictionary, NSDictionary, NSZipFileArchive, NSAttributedString, NSFileWrapper;

@interface NSOpenDocumentWriter : NSObject {
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSFileWrapper *_fileWrapper;
    NSZipFileArchive *_archive;
    NSMutableArray *_paraStyleStrings;
    NSMutableArray *_paraStyleArrays;
    NSMutableArray *_charStyleStrings;
    NSMutableArray *_charStyleArrays;
    NSMutableArray *_tableStyleStrings;
    NSMutableArray *_tableColumnStyleStrings;
    NSMutableArray *_tableCellStyleStrings;
    NSMutableArray *_listStyleStrings;
    NSMutableDictionary *_fontNames;
    unsigned long long _tableNumber;
}

- (void)dealloc;
- (id)archive:(id)a0 contentsForEntryName:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (id)fileWrapper;
- (unsigned long long)_blockClassForBlock:(id)a0;
- (void)_closeBlocksForParagraphStyle:(id)a0 atIndex:(unsigned long long)a1 inString:(id)a2;
- (void)_closeListsForParagraphStyle:(id)a0 atIndex:(unsigned long long)a1 inString:(id)a2;
- (id)_defaultValueForAttribute:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_generateContent;
- (unsigned long long)_listClassForListRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_openBlocksForParagraphStyle:(id)a0 atIndex:(unsigned long long)a1 inString:(id)a2;
- (void)_openListsForParagraphStyle:(id)a0 atIndex:(unsigned long long)a1 inString:(id)a2;
- (unsigned long long)_paragraphClassforParagraphStyle:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (unsigned long long)_spanClassForAttributes:(id)a0 inParagraphClass:(unsigned long long)a1 spanClass:(unsigned long long)a2;
- (id)contentData;
- (id)metaData;
- (id)openDocumentFormatData;
- (void)setDocumentAttributes:(id)a0;
- (id)zipFileArchive;

@end
