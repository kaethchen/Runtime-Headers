@class NSUUID, NSDictionary;

@interface IXDataStoreClock : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *guid;
@property (nonatomic) unsigned long long sequenceNumber;
@property (readonly, nonatomic) NSDictionary *notificationDictionary;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)newClock;
+ (id)newClockWithDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)increment;
- (id)initWithGUID:(id)a0 sequenceNumber:(unsigned long long)a1;

@end
