@interface ExtensionKitSettings.EnablementSceneConfigurationRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ extensionPointGroup;
    void /* unknown type, empty encoding */ focusedExtensionIdentifier;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ descriptiveText;
    void /* unknown type, empty encoding */ icon;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
