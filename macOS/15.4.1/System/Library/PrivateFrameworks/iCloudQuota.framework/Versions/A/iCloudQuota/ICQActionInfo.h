@class NSString, ICQConfirmationInfo, NSURL, ICQLink;

@interface ICQActionInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDefault;
@property (nonatomic) BOOL isDestructive;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) ICQLink *icqLink;
@property (retain, nonatomic) NSURL *actionURL;
@property (retain, nonatomic) ICQConfirmationInfo *confirmation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;
- (id)initFromConfirmationAction:(id)a0;

@end
