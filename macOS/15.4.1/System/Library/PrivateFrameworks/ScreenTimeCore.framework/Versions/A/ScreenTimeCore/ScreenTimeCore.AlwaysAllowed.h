@class NSSet;

@interface ScreenTimeCore.AlwaysAllowed : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ apps;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSSet *apps;
@property (nonatomic, readonly) long long hash;

+ (id)defaultAlwaysAllowed;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)removeWithApps:(id)a0;
- (id)addWithApp:(id)a0;
- (id)addWithApps:(id)a0;
- (id)initWithApps:(id)a0;
- (id)removeWithApp:(id)a0;

@end
