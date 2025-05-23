@class NSString, NSDate;
@protocol GCSJSONObject;

@interface GCSTombstone : NSObject <GCSJSONSerializable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) double timeToLiveSeconds;

@property (readonly, nonatomic) id<GCSJSONObject> jsonObject;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) long long recordType;

+ (id)archivalClasses;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJSONObject:(id)a0;
- (id)initWithIdentifier:(id)a0 creationDate:(id)a1 recordType:(long long)a2;

@end
