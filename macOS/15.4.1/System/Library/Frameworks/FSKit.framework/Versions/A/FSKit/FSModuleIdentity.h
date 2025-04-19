@class NSString, NSUUID, NSDictionary, NSURL;

@interface FSModuleIdentity : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *desc;
@property (readonly) NSUUID *uuid;
@property (readonly) NSString *localizedName;
@property (readonly) NSDictionary *attributes;
@property (readonly, getter=isSystem) BOOL system;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSURL *url;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (id)description;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setEnabled:(BOOL)a0;
- (id)initWithApplicationExtensionRecord:(id)a0 isEnabled:(BOOL)a1;
- (id)initWithApplicationExtensionRecord:(id)a0 isEnabled:(BOOL)a1 isSystem:(BOOL)a2;

@end
