@class NSData;

@interface Sage.SchemaXPCEnvelope : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ _schema;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSData *_schema;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
