@class NSArray, NSString, ICQImageURL, ICQActionInfo;

@interface ICQAppInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *bundleIds;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL fetchLocally;
@property (retain, nonatomic) ICQImageURL *iconURL;
@property (copy, nonatomic) NSString *detailLabel;
@property (copy, nonatomic) NSString *detailLabelColor;
@property (retain, nonatomic) ICQActionInfo *action;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;

@end
