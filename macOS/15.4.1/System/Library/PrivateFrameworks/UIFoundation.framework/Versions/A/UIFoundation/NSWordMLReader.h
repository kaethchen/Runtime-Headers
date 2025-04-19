@class NSMutableString, NSString, NSMutableDictionary, NSMutableParagraphStyle, NSZipFileArchive, NSMutableAttributedString, NSMutableArray;

@interface NSWordMLReader : NSObject <NSXMLParserDelegate> {
    NSMutableAttributedString *_attrStr;
    NSMutableDictionary *_documentAttrs;
    NSZipFileArchive *_archive;
    NSMutableDictionary *_styles;
    long long _errorCode;
    long long _parseState;
    long long _indexingLimit;
    long long _thumbnailLimit;
    NSMutableDictionary *_namespaces;
    NSMutableDictionary *_elementValues;
    NSMutableArray *_qualifiedAttributeNames;
    NSMutableDictionary *_relationships;
    NSMutableParagraphStyle *_curParStyle;
    NSMutableDictionary *_listDefinitions;
    NSMutableArray *_textBlocks;
    NSMutableArray *_textTables;
    NSMutableArray *_textTableRows;
    NSMutableArray *_textTableRowArrays;
    NSMutableDictionary *_curParAttributes;
    NSMutableDictionary *_curAttributes;
    NSMutableDictionary *_fontCache;
    NSMutableString *_curString;
    NSString *_curDocumentAttribute;
    NSString *_curStyleName;
    double _defaultTabInterval;
    long long _listLevel;
    long long _listNumber;
    long long _prevListLevel;
    long long _prevListNumber;
    BOOL _seenSect;
    BOOL _hasOOXMLNamespace;
}

@property BOOL includesTextListMarkers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultParagraphStyle;
+ (id)_gregorianCalendar;

- (void)dealloc;
- (void)parser:(id)a0 didEndElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3;
- (void)parser:(id)a0 didEndMappingPrefix:(id)a1;
- (void)parser:(id)a0 didStartElement:(id)a1 namespaceURI:(id)a2 qualifiedName:(id)a3 attributes:(id)a4;
- (void)parser:(id)a0 didStartMappingPrefix:(id)a1 toURI:(id)a2;
- (void)parser:(id)a0 foundCharacters:(id)a1;
- (void)_parse;
- (id)attributedString;
- (id)_dateForString:(id)a0;
- (void)_addMarkersToList:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)_changeNamespace:(long long)a0 fromPrefix:(id)a1 toPrefix:(id)a2;
- (void)_parseCharacterAttributesFromElement:(long long)a0 attributes:(id)a1;
- (BOOL)_parseData:(id)a0;
- (void)_parseParagraphAttributesFromElement:(long long)a0 attributes:(id)a1;
- (id)_textListsForListNumber:(long long)a0 level:(long long)a1;
- (id)documentAttributes;
- (id)initWithArchive:(id)a0 options:(id)a1;
- (id)initWithData:(id)a0 options:(id)a1;
- (id)initWithPath:(id)a0 options:(id)a1;
- (void)setMutableAttributedString:(id)a0;

@end
