@class NSData;

@interface Sage.GenerativeErrorXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _error;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_error;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
