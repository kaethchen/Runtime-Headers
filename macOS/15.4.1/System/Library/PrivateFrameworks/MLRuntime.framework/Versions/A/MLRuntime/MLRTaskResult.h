@class NSDictionary, NSData;

@interface MLRTaskResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *JSONResult;
@property (readonly, nonatomic) NSData *vector;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithJSONResult:(id)a0 unprivatizedVector:(id)a1;

@end
