@class NSString;

@interface AXRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly, nonatomic) AXRequest *currentRequest;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *technology;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTechnology:(id)a0;

@end
