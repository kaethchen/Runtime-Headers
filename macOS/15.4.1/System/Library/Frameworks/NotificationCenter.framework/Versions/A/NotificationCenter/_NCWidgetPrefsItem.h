@class NSString;

@interface _NCWidgetPrefsItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) NSString *imagePath;
@property (copy, nonatomic) NSString *imageBundlePath;
@property (copy, nonatomic) NSString *plugInPath;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL canDisable;
@property (nonatomic) BOOL canSort;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
