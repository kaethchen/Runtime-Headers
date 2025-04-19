@class NSArray, NSString, NSData, NSMutableDictionary, NSMutableArray;

@interface MCMutableMessageHeaders : MCMessageHeaders <ECMutableMessageHeaders> {
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}

@property (readonly, nonatomic) NSArray *listUnsubscribeCommands;
@property (readonly, nonatomic) NSString *listUnsubscribePostContent;
@property (readonly, nonatomic) NSData *encodedHeaders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)firstHeaderForKey:(id)a0;
- (id)allHeaderKeys;
- (id)messageIDListForKey:(id)a0;
- (void)setAddressListForSender:(id)a0;
- (void)setAddressListForTo:(id)a0;
- (void)setHeader:(id)a0 forKey:(id)a1;
- (id)addressListForKey:(id)a0;
- (BOOL)hasHeaderForKey:(id)a0;
- (void)removeHeaderForKey:(id)a0;
- (void)setAddressList:(id)a0 forKey:(id)a1;
- (void)setMessageIDList:(id)a0 forKey:(id)a1;
- (id)_headersForKey:(id)a0;
- (void)_appendAddedHeaderKey:(id)a0 value:(id)a1 toData:(id)a2;
- (void)_appendEncodedHeadersToData:(id)a0;
- (void)_appendHeaderKey:(id)a0 value:(id)a1 toData:(id)a2;
- (id)_firstAddressForKey:(id)a0 sender:(id)a1;
- (id)_firstMessageIDForKey:(id)a0 sender:(id)a1;

@end
