@class NSString, NSData;

@interface AppleIDPasswordMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *proto;
@property (readonly, nonatomic) NSData *salt;
@property (readonly, nonatomic) int iterations;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProto:(id)a0 salt:(id)a1 iterations:(int)a2;

@end
