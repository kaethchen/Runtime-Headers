@class DDMBook, NSString, NSArray, NSDictionary, DDMMisc, NSNumber, DDMMeta;

@interface DDMTopic : DDMObject

@property (readonly) NSString *tocID;
@property (readonly) NSString *title;
@property (readonly) NSString *locale;
@property (readonly) NSString *content;
@property (readonly) DDMMeta *meta;
@property (readonly) NSArray *articles;
@property (readonly) NSString *bookID;
@property (readonly) NSDictionary *bookInfo;
@property (readonly) NSNumber *count;
@property (readonly) NSString *topicID;
@property (readonly) NSString *articleID;
@property (readonly) NSString *searchTitle;
@property (readonly) DDMMisc *miscAttributes;
@property (readonly) NSString *bodyString;
@property (readonly) NSString *htmlTopic;
@property (readonly) DDMBook *ddmBook;
@property BOOL allResourcesCached;

+ (id)ddmObjectIdentifierWithBookID:(id)a0 topicID:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)ddmObjectIdentifier;

@end
