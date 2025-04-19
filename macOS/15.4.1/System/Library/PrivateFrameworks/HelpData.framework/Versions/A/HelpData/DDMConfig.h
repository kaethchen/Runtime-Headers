@class NSMapTable, NSDictionary, NSArray, NSString, NSURL;

@interface DDMConfig : NSObject

@property (retain) NSDictionary *configDict;
@property (retain) NSMapTable *productTable;
@property (readonly) NSDictionary *ddmBooks;
@property (readonly) NSArray *ddmPreloadedBookIDs;
@property (readonly) NSString *serverURLString;
@property (readonly) NSURL *supportSiteURL;
@property (readonly) NSString *serviceName;

+ (id)sharedConfig;

- (void).cxx_destruct;
- (id)_init;
- (id)bookIDForProductName:(id)a0;
- (id)ddmConfigForBookID:(id)a0;

@end
