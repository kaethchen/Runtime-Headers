@class NSString;

@interface DDMMeta : DDMObject

@property (readonly) NSString *buildDate;
@property (readonly) NSString *contentType;
@property (readonly) NSString *framework;
@property (readonly) NSString *appIcon;
@property (readonly) NSString *product;
@property (readonly) NSString *version;

- (void).cxx_destruct;

@end
