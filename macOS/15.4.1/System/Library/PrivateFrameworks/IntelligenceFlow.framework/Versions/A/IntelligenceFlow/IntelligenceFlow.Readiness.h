@interface IntelligenceFlow.Readiness : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ toolKitTools;
    void /* unknown type, empty encoding */ assistantSchemas;
    void /* unknown type, empty encoding */ totalEmbeddings;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
