@class NSData, NSArray;

@interface TransparencySelfValidationStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long status;
@property (retain) NSData *pushToken;
@property (retain) NSArray *loggableDatas;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStatus:(unsigned long long)a0 pushToken:(id)a1;

@end
