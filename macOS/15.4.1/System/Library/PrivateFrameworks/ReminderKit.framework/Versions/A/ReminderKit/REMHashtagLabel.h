@class NSString, NSUUID, NSDate;

@interface REMHashtagLabel : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *canonicalName;
@property (readonly, nonatomic) NSDate *firstOccurrenceCreationDate;
@property (readonly, nonatomic) NSDate *recencyDate;
@property (readonly, nonatomic) NSUUID *uuidForChangeTracking;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithName:(id)a0 canonicalName:(id)a1 firstOccurrenceCreationDate:(id)a2 recencyDate:(id)a3 uuidForChangeTracking:(id)a4;
- (BOOL)isEqualToHashtagLabel:(id)a0;

@end
