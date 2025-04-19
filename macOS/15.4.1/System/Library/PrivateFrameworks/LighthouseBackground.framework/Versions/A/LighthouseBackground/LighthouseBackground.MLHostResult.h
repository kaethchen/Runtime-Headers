@class NSString;

@interface LighthouseBackground.MLHostResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ status;
    void /* unknown type, empty encoding */ policy;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
