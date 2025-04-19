@class NSURL, NSString;

@interface SFSafariPageProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL usesPrivateBrowsing;
@property (nonatomic, getter=isActive) BOOL active;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
