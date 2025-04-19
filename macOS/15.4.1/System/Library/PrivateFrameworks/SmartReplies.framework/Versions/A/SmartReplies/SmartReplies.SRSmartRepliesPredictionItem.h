@interface SmartReplies.SRSmartRepliesPredictionItem : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ score;
    void /* unknown type, empty encoding */ label;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
