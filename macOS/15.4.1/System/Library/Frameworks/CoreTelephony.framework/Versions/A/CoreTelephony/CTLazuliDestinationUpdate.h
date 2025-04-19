@class CTLazuliDestination;

@interface CTLazuliDestinationUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTLazuliDestination *previous;
@property (retain, nonatomic) CTLazuliDestination *discovered;
@property (nonatomic) BOOL isBot;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliDestinationUpdate:(id)a0;

@end
