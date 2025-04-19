@class NSArray, NSString, NSURL, DDMBook;

@interface DDMTocItem : DDMObject

@property (retain) NSArray *childIDs;
@property (retain) NSArray *contents;
@property (retain) NSArray *childItems;
@property (readonly) NSString *articleID;
@property (readonly) NSString *createdDate;
@property (readonly) NSString *locale;
@property (readonly) NSString *modifiedDate;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *title;
@property (readonly) NSString *tocID;
@property (readonly) NSURL *targetURL;
@property (readonly, weak) DDMBook *ddmBook;
@property (readonly) NSString *destinationID;
@property (readonly) NSString *destinationProduct;

- (id)description;
- (void).cxx_destruct;
- (id)childItemWithID:(id)a0;

@end
