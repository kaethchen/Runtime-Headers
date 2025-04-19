@class NSString;

@interface LighthouseBackground.MLHostExtensionContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ taskId;
    void /* unknown type, empty encoding */ taskName;
    void /* unknown type, empty encoding */ taskFolder;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
