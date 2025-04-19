@class NSString;

@interface SCRunningApplication : NSObject <NSCopying, NSSecureCoding> {
    NSString *_bundleIdentifier;
    NSString *_applicationName;
    int _processID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *applicationName;
@property (readonly) int processID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPID:(int)a0;
- (BOOL)isEqualToSCRunningApplication:(id)a0;

@end
