@class NSDictionary, NSMutableString, NSZipFileArchive, NSAttributedString, NSFileWrapper;

@interface NSWordMLWriter : NSObject {
    NSAttributedString *_attrStr;
    NSDictionary *_documentAttrs;
    NSMutableString *_documentStr;
    NSFileWrapper *_fileWrapper;
    NSZipFileArchive *_archive;
}

- (void)dealloc;
- (id)archive:(id)a0 propertiesForEntryName:(id)a1;
- (id)archive:(id)a0 contentsForEntryName:(id)a1;
- (id)initWithAttributedString:(id)a0;
- (id)fileWrapper;
- (id)_metaProperties;
- (id)_coreProperties;
- (id)XMLFormatData;
- (id)_appProperties;
- (void)_generateDocument;
- (BOOL)_isWordML;
- (void)_writeCharacterAttributes:(id)a0;
- (void)_writeDocumentAttributes;
- (void)_writeDocumentProperties;
- (void)_writeFonts;
- (void)_writeParagraphStyle:(id)a0;
- (id)docxFormatData;
- (void)setDocumentAttributes:(id)a0;
- (id)zipFileArchive;

@end
