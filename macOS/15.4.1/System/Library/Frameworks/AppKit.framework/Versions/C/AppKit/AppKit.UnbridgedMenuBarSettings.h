@interface AppKit.UnbridgedMenuBarSettings : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ perMenuBarSettings;
    void /* unknown type, empty encoding */ globalSettings;
    void /* unknown type, empty encoding */ applicationTitle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
