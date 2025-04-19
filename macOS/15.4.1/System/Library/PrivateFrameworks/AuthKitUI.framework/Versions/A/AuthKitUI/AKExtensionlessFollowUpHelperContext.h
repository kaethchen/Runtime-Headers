@class NSString, NSDictionary, NSImage, NSWindow;

@interface AKExtensionlessFollowUpHelperContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueItemIdentifier;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *urlKey;
@property (copy, nonatomic) NSString *akAction;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (weak, nonatomic) NSWindow *hostWindow;
@property (retain, nonatomic) NSImage *displayImage;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
