@class NSString, HMAccessoryCategory;

@interface HMDAccessoryAdvertisement : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly) long long associationOptions;
@property (readonly, nonatomic) HMAccessoryCategory *category;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setCategory:(id)a0;
- (id)initWithIdentifier:(id)a0 name:(id)a1 category:(id)a2;

@end
