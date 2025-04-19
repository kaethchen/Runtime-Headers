@class NSData;

@interface Sage.SessionConfigurationXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _configuration;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_configuration;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
