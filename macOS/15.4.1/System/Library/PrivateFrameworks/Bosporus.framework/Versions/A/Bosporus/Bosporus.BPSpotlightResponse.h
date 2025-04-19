@interface Bosporus.BPSpotlightResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ resultSections;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
