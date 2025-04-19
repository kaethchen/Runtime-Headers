@class REMObjectID;

@interface REMListsDataViewInvocation_fetchDefaultListRequiringCloudKit : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *accountObjectID;
@property (nonatomic) BOOL debug_useInMemoryPreferredDefaultListStorage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountObjectID:(id)a0 debugUseInMemoryPreferredDefaultListStorage:(BOOL)a1;

@end
