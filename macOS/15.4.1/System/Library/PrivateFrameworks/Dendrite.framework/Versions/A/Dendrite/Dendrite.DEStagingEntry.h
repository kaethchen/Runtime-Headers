@class NSData;

@interface Dendrite.DEStagingEntry : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ payload;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ id;
@property (nonatomic, readonly) NSData *payload;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithId:(long long)a0 payload:(id)a1;

@end
