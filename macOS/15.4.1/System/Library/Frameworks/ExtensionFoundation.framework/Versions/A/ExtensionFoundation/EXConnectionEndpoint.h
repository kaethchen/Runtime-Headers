@class NSString;

@interface EXConnectionEndpoint : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *service;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ bsServiceConnectionEndpoint;
@property (nonatomic, retain) void /* unknown type, empty encoding */ xpcEndpoint;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 xpcEndpoint:(id)a1;
- (id)initWithIdentifier:(id)a0 bsServiceConnectionEndpoint:(id)a1;

@end
