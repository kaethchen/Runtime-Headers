@class NSMutableDictionary, NSMutableArray;

@interface ICNFMCMutableMessageHeaders : ICNFMCMessageHeaders {
    NSMutableDictionary *_headersAdded;
    NSMutableArray *_headersRemoved;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)firstHeaderForKey:(id)a0;
- (id)allHeaderKeys;
- (id)messageIDListForKey:(id)a0;
- (void)setHeader:(id)a0 forKey:(id)a1;
- (id)addressListForKey:(id)a0;
- (BOOL)hasHeaderForKey:(id)a0;
- (void)removeHeaderForKey:(id)a0;
- (void)setAddressList:(id)a0 forKey:(id)a1;
- (void)setMessageIDList:(id)a0 forKey:(id)a1;
- (id)_headersForKey:(id)a0;
- (void)_appendAddedHeaderKey:(id)a0 value:(id)a1 toData:(id)a2;
- (void)_appendHeaderKey:(id)a0 value:(id)a1 toData:(id)a2;
- (id)_firstAddressForKey:(id)a0 sender:(id)a1;
- (id)_firstMessageIDForKey:(id)a0 sender:(id)a1;
- (void)addFromSpaceIfMissing;
- (id)encodedHeadersIncludingFromSpace:(BOOL)a0;

@end
