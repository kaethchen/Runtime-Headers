@class NSDictionary, NSData;

@interface SKStatusPayload : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *payloadDictionary;
@property (retain, nonatomic) NSDictionary *cachedPayloadDictionary;
@property (readonly, nonatomic) NSData *payloadData;

+ (id)logger;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
