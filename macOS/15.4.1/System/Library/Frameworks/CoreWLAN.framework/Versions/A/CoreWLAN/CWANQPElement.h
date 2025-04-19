@class CWNetwork, NSDictionary, NSDate;

@interface CWANQPElement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) CWNetwork *network;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDictionary *anqpResult;

- (void)dealloc;
- (BOOL)conformsToProtocol:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)typeString;
- (id)initWithNetwork:(id)a0 timestamp:(id)a1 type:(unsigned long long)a2 anqpResult:(id)a3;
- (BOOL)isEqualtoANQPElement:(id)a0;

@end
