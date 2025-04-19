@class DDMInfo, NSString, HPDHelpBook, DDMMisc, NSArray, DDMMeta;

@interface DDMBook : DDMObject

@property (retain) HPDHelpBook *cachedHelpBook;
@property (readonly) NSString *bookID;
@property (readonly) NSString *tocID;
@property (readonly) NSString *product;
@property (readonly) NSString *version;
@property (readonly) NSString *locale;
@property (readonly) NSString *language;
@property (readonly) NSString *title;
@property (readonly) NSString *copyright;
@property (readonly) DDMInfo *info;
@property (readonly) DDMMeta *meta;
@property (readonly) DDMMisc *miscAttributes;
@property (readonly) BOOL isSingleTopicBook;
@property (readonly) HPDHelpBook *helpBook;
@property (readonly) NSString *appBundleVersion;
@property (readonly) NSString *helpbookID;
@property (readonly) NSArray *tocItems;

+ (id)ddmObjectIdentifierWithBookID:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)ddmObjectIdentifier;
- (id)defaultTOCItem;
- (id)tocItemWithID:(id)a0;

@end
