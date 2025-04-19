@interface AppleMediaServicesUI.ReviewContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ accentColor;
    void /* unknown type, empty encoding */ lockupStyle;
    void /* unknown type, empty encoding */ lockupDetails;
    void /* unknown type, empty encoding */ mediaTaskType;
    void /* unknown type, empty encoding */ clientInfo;
    void /* unknown type, empty encoding */ itemIdentifier;
    void /* unknown type, empty encoding */ itemVersion;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
