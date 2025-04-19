@class NSString;

@interface LNConfirmationSystemStyleMontaraEnablement : LNConfirmationSystemStyle {
    void /* unknown type, empty encoding */ bundleIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ source;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isExplicitRequest;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 source:(long long)a1 isExplicitRequest:(BOOL)a2;

@end
