@class NSString;

@interface GDSiriPersonOrganization : NSObject

@property (readonly, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) NSString *phoneticOrganizationName;

- (void).cxx_destruct;
- (id)initWithOrganizationName:(id)a0 phoneticOrganizationName:(id)a1;

@end
