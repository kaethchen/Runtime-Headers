@class NSString;

@interface PXSharedAlbumsActivityEntryContributor : NSObject

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *email;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 email:(id)a1;

@end
