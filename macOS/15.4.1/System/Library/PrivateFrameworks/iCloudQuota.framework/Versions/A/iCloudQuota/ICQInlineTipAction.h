@class NSString, NSURL, ICQLink;

@interface ICQInlineTipAction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) ICQLink *link;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
