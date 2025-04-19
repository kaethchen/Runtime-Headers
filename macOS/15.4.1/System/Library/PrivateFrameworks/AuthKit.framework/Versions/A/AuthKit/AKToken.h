@class NSString, NSDate;

@interface AKToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *name;

+ (id)_tokenComponentsFromBase64String:(id)a0;
+ (id)idmsTokenWithBase64String:(id)a0;
+ (id)tokenWithBase64String:(id)a0;
+ (id)tokenWithDictionary:(id)a0;
+ (id)tokenWithValue:(id)a0 lifetime:(id)a1;
+ (id)tokenWithValue:(id)a0 lifetime:(id)a1 creationTime:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
