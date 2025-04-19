@class NSData;

@interface Sage.TemplateXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _template;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSData *_template;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
