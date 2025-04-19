@class NSNumber, NSString;

@interface CTLazuliChatCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL autoAcceptChat;
@property (retain, nonatomic) NSNumber *max1ToManyRecipients;
@property (retain, nonatomic) NSNumber *revokeTimer;
@property (retain, nonatomic) NSString *spamReportingUri;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliChatCapabilities:(id)a0;

@end
