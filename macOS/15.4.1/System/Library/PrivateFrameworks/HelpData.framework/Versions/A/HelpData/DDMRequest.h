@class NSString, NSURL;

@interface DDMRequest : NSObject

@property (readonly) unsigned int requestType;
@property (readonly) NSString *ddmID;
@property (readonly) NSString *ddmBookID;
@property (readonly) NSString *language;
@property (readonly) NSString *product;
@property (readonly) NSString *platform;
@property (readonly) NSString *platformVersion;
@property (readonly) NSString *productVersion;
@property (readonly) NSURL *ddmURL;

+ (id)bookRequestWithID:(id)a0 language:(id)a1 product:(id)a2 productVersion:(id)a3 platform:(id)a4 platformVersion:(id)a5;
+ (id)topicRequestWithID:(id)a0 ddmBookID:(id)a1 language:(id)a2 product:(id)a3 productVersion:(id)a4 platform:(id)a5 platformVersion:(id)a6;

- (void).cxx_destruct;
- (id)_ddmURLWithQuery:(id)a0;
- (id)_ddmURLWithURLComponents:(id)a0;
- (id)ddmObjectFromResponseDictionary:(id)a0 originURL:(id)a1;
- (id)initWithType:(unsigned int)a0 ddmID:(id)a1 ddmBookID:(id)a2 language:(id)a3 product:(id)a4 productVersion:(id)a5 platform:(id)a6 platformVersion:(id)a7;

@end
