@class NSString;

@interface _LSDContainerizedBundleInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleID;
@property (nonatomic) int record_modtime;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) int placeholder_record_modtime;
@property (retain, nonatomic) NSString *placeholder_path;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0;

@end
