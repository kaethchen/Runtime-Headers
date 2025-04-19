@class NSUUID, RTLocation, NSDate;

@interface RTLocationOfInterestVisit : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long locationOfInterestSource;
@property (readonly, nonatomic) RTLocation *location;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSDate *entryDate;
@property (readonly, nonatomic) NSDate *exitDate;
@property (readonly, nonatomic) double locationOfInterestConfidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)exit;
- (id)entry;
- (id)initWithIdentifier:(id)a0 entry:(id)a1 exit:(id)a2 location:(id)a3 locationOfInterestConfidence:(double)a4 locationOfInterestSource:(unsigned long long)a5;
- (id)entryTime;
- (id)exitTime;

@end
