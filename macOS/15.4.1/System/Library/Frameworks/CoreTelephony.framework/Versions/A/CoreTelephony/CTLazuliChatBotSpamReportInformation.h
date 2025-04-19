@class NSString, CTLazuliMessageIDList;

@interface CTLazuliChatBotSpamReportInformation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *chatbotUri;
@property (retain, nonatomic) CTLazuliMessageIDList *messageIDList;
@property (nonatomic) long long spamType;
@property (retain, nonatomic) NSString *freeBodyText;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatBotSpamReportInformation:(id)a0;

@end
