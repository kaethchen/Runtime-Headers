@class NSString, NSUUID, NSDate;

@interface RTLearnedPlaceTypeInference : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *learnedPlaceIdentifier;
@property (readonly, nonatomic) unsigned long long placeType;
@property (readonly, nonatomic) unsigned long long metricSource;
@property (readonly, nonatomic) NSDate *creationDate;

+ (id)createWithLearnedPlaceTypeInferenceMO:(id)a0;
+ (id)createWithManagedObject:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 sessionId:(id)a1 learnedPlaceIdentifier:(id)a2 placeType:(unsigned long long)a3 metricSource:(unsigned long long)a4 creationDate:(id)a5;
- (id)managedObjectWithContext:(id)a0;

@end
