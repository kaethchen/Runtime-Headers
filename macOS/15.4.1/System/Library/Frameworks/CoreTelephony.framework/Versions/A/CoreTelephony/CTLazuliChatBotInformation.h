@class CTLazuliChatBotPCC, NSString, NSURL, CTLazuliChatBotAddressEntryList;

@interface CTLazuliChatBotInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliChatBotPCC *pcc;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *provider;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSString *color;
@property (retain, nonatomic) NSString *backgroundImage;
@property (retain, nonatomic) NSURL *website;
@property (retain, nonatomic) NSURL *tcPageUrl;
@property (retain, nonatomic) CTLazuliChatBotAddressEntryList *addresses;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatBotInformation:(id)a0;

@end
