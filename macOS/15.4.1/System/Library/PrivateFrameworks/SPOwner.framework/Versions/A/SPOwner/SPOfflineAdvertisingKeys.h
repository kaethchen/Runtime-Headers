@class NSArray, NSDictionary;

@interface SPOfflineAdvertisingKeys : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long rotationInterval;
@property (readonly, copy, nonatomic) NSArray *keys;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInterval:(long long)a0 keys:(id)a1;

@end
