@class NSString;

@interface CTPNRDataType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long pnrMechanism;
@property (retain, nonatomic) NSString *svcCenterAddr;
@property (retain, nonatomic) NSString *destAddr;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToCTPNRDataType:(id)a0;

@end
