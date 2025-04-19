@class NSString, NSNumber, RCAddress;

@interface RCOverrideRule : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *category;
@property (retain, nonatomic) NSNumber *categoryUpdateTime;
@property (retain, nonatomic) RCAddress *address;
@property (copy, nonatomic) NSString *xAppleRequestHeader;
@property (copy, nonatomic) NSString *messageIdHeader;
@property (copy, nonatomic) NSString *overrideIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmailAddress:(id)a0 displayName:(id)a1 overrideIdentifier:(id)a2 category:(id)a3 categoryUpdateTime:(double)a4;
- (id)initWithEmailAddress:(id)a0 overrideIdentifier:(id)a1 category:(id)a2 categoryUpdateTime:(double)a3;
- (id)initWithMessageIdHeader:(id)a0 appleRequestHeader:(id)a1 overrideIdentifier:(id)a2 category:(id)a3 categoryUpdateTime:(double)a4;

@end
