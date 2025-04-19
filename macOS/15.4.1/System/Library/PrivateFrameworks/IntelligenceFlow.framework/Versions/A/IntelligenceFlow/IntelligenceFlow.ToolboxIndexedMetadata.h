@interface IntelligenceFlow.ToolboxIndexedMetadata : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ toolDescription;
    void /* unknown type, empty encoding */ positiveUtterances;
    void /* unknown type, empty encoding */ negativeUtterances;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
