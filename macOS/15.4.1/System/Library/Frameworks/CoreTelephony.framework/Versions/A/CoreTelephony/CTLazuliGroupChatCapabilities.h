@class NSNumber;

@interface CTLazuliGroupChatCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL autoAcceptGroupChat;
@property (retain, nonatomic) NSNumber *maxGroupSize;
@property (nonatomic) BOOL supportsComposingIndicator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliGroupChatCapabilities:(id)a0;

@end
