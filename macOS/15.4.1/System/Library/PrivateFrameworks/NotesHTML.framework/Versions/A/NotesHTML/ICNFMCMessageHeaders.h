@class NSArray, NSString, NSData, NSAttributedString;

@interface ICNFMCMessageHeaders : NSObject <NSCopying, NSMutableCopying> {
    id _sender;
}

@property (readonly, nonatomic) unsigned long long encodingHint;
@property (readonly, copy, nonatomic) NSData *headerData;
@property (readonly, copy, nonatomic) NSArray *allHeaderKeys;
@property (readonly, copy, nonatomic) NSString *mailVersion;
@property (readonly, nonatomic) BOOL messageIsFromMicrosoft;
@property (readonly, copy, nonatomic) NSAttributedString *attributedString;
@property (readonly, copy, nonatomic) NSAttributedString *attributedStringForAllHeaders;

+ (void)initialize;
+ (BOOL)isAddressHeaderKey:(id)a0;
+ (BOOL)isMessageIDHeaderKey:(id)a0;
+ (id)basicHeaderKeys;
+ (id)headerKeysFromLocalizedHeaders:(id)a0;
+ (BOOL)_customHeadersEnabled;
+ (id)_localizedHeadersForKeys;
+ (id)customDisplayedHeaders;
+ (id)customHeadersIgnoringDisabledState;
+ (id)englishHeadersFromLocalizedHeaders:(id)a0;
+ (BOOL)isHumanReadableHeaderKey:(id)a0;
+ (id)localizedHeaderForKey:(id)a0;
+ (id)localizedHeaders;
+ (id)localizedHeadersFromEnglishHeaders:(id)a0;
+ (void)setCustomDisplayedHeaders:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)firstHeaderForKey:(id)a0;
- (id)headersForKey:(id)a0;
- (id)firstMessageIDForKey:(id)a0;
- (id)messageIDListForKey:(id)a0;
- (id)addressListForKey:(id)a0;
- (void)appendHeaderData:(id)a0 recipients:(id)a1;
- (void)appendHeaderData:(id)a0 recipients:(id)a1 recipientsByHeaderKey:(id)a2 expandGroups:(BOOL)a3 includeComment:(BOOL)a4;
- (id)firstAddressForKey:(id)a0;
- (BOOL)hasHeaderForKey:(id)a0;
- (id)initWithHeaderData:(id)a0 encodingHint:(unsigned long long)a1;
- (id)_sender;
- (id)_headersForKey:(id)a0;
- (id)_htmlHeaderKey:(id)a0 useBold:(BOOL)a1 useGray:(BOOL)a2;
- (id)_attributedStringForHeaders:(id)a0;
- (id)_capitalizedKeyForKey:(id)a0;
- (id)_firstAddressForKey:(id)a0 sender:(id)a1;
- (id)_firstMessageIDForKey:(id)a0 sender:(id)a1;
- (id)_headersToDisplayFromHeaderKeys:(id)a0;
- (id)_htmlValueWithKey:(id)a0 value:(id)a1 useBold:(BOOL)a2;
- (id)_newDecodedAddressFromDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sender:(id)a1 consumedLength:(unsigned long long *)a2;
- (id)_newDecodedMessageIDFromDataInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 sender:(id)a1 consumedLength:(unsigned long long *)a2;
- (id)_newHeaderValueForKey:(id)a0 offset:(unsigned long long *)a1;
- (void)_resetSender;
- (void)_setCapitalizedKey:(id)a0 forKey:(id)a1;
- (id)htmlStringUseBold:(BOOL)a0 useGray:(BOOL)a1;
- (void)_appendAddressList:(id)a0 toData:(id)a1;
- (id)encodedHeadersIncludingFromSpace:(BOOL)a0;
- (id)headersDictionaryForMessageType:(char)a0;

@end
