@class NSString, NSNumber, NSXMLElement;

@interface HPDResult : NSObject <NSCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *title;
@property (retain) NSString *type;
@property (retain) NSNumber *relevance;
@property (retain) id payload;
@property (readonly, copy) NSXMLElement *elementValue;
@property (readonly, copy) NSString *url;
@property (readonly, copy) NSString *summary;
@property (readonly, copy) NSString *bookID;
@property (readonly, copy) NSString *appID;
@property (readonly, copy) NSString *topicID;
@property (readonly, copy) NSString *productName;
@property (readonly, copy) NSString *appVersion;
@property (readonly, copy) NSNumber *isDuplicateApp;

+ (BOOL)isKeyExcludedFromWebScript:(const char *)a0;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)resultWithTitle:(id)a0 andType:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 andType:(id)a1;
- (long long)relevanceCompare:(id)a0;
- (long long)titleCompare:(id)a0;

@end
