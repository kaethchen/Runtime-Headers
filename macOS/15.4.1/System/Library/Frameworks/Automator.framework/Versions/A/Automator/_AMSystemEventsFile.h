@class NSString;

@interface _AMSystemEventsFile : _AMSystemEventsDiskItem

@property (copy) id creatorType;
@property (copy) id defaultApplication;
@property (copy) id fileType;
@property (readonly, copy) NSString *kind;
@property (readonly, copy) NSString *productVersion;
@property (readonly, copy) NSString *shortVersion;
@property BOOL stationery;
@property (readonly, copy) NSString *typeIdentifier;
@property (readonly, copy) NSString *version;

- (id)open;

@end
