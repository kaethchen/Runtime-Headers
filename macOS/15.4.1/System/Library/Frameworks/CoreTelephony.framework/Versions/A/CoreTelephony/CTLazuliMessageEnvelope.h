@class CTLazuliMessageID, CTLazuliDestination;

@interface CTLazuliMessageEnvelope : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (retain, nonatomic) CTLazuliDestination *from;
@property (retain, nonatomic) CTLazuliMessageID *messageID;
@property (retain, nonatomic) id content;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliMessageEnvelope:(id)a0;

@end
