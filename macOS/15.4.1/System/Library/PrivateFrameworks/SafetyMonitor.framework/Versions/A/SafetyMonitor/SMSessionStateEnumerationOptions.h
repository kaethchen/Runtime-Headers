@class NSUUID, NSDateInterval, CLLocation, NSNumber;

@interface SMSessionStateEnumerationOptions : RTEnumerationOptions <NSCopying, NSSecureCoding> {
    unsigned long long _batchSize;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) BOOL sortByCreationDate;
@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) unsigned long long sessionState;
@property (readonly, nonatomic) CLLocation *locationBoundingBox;
@property (readonly, nonatomic) NSNumber *boundingBoxRadius;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (Class)enumeratedType;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 sortByCreationDate:(BOOL)a2 ascending:(BOOL)a3 dateInterval:(id)a4;
- (id)initWithBatchSize:(unsigned long long)a0 fetchLimit:(unsigned long long)a1 sortByCreationDate:(BOOL)a2 ascending:(BOOL)a3 dateInterval:(id)a4 sessionState:(unsigned long long)a5 locationBoundingBox:(id)a6 boundingBoxRadius:(id)a7 sessionIdentifier:(id)a8;

@end
