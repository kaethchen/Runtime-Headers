@class NSString;

@interface Settings.InitializationParameters : NSObject <_EXSceneInitializationParameters> {
    void /* unknown type, empty encoding */ itemIdentifier;
    void /* unknown type, empty encoding */ anchor;
    void /* unknown type, empty encoding */ navigationPath;
    void /* unknown type, empty encoding */ contentWidth;
    void /* unknown type, empty encoding */ role;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isDefault;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
