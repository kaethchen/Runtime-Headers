@class NSString, NSArray;

@interface WFStaccatoActionTemplate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *actionIdentifier;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedDescription;
@property (retain, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tintColor;
- (id)initWithIdentifier:(id)a0 sectionIdentifier:(id)a1 actionIdentifier:(id)a2 localizedTitle:(id)a3 localizedDescription:(id)a4 parameters:(id)a5;
- (BOOL)isEqualToActionTemplate:(id)a0;

@end
