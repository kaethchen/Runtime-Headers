@class NSString, NSDictionary;

@interface AMSUIWebJSRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *logKey;
@property (retain) NSDictionary *options;
@property (readonly) NSString *service;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithServiceName:(id)a0 logKey:(id)a1;

@end
