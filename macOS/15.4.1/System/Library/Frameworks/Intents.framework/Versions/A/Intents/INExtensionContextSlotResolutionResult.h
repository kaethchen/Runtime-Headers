@class NSData;

@interface INExtensionContextSlotResolutionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long result;
@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithResult:(long long)a0 data:(id)a1;

@end
