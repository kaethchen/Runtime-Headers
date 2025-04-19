@class NSString, NSURL, NSColor;

@interface WBSTemplateIconCacheRecord : NSObject

@property (readonly, copy, nonatomic) NSString *host;
@property (readonly, copy, nonatomic) NSURL *templateIconURL;
@property (readonly, nonatomic) NSColor *themeColor;
@property (readonly, nonatomic) BOOL canSaveToDisk;

- (void).cxx_destruct;
- (id)initWithHost:(id)a0 templateIconURL:(id)a1 themeColor:(id)a2 canSaveToDisk:(BOOL)a3;

@end
