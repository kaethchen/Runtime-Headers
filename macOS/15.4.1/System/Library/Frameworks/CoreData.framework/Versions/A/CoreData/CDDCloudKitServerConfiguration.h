@class NSString;

@interface CDDCloudKitServerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSString *_storeDirectoryPath;
    NSString *_machServiceName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
