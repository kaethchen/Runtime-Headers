@class NSArray;

@interface REMListsDataViewInvocation_changeTrackingFetchByObjectIDIncludingConcealed : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objectIDs;
@property (nonatomic) BOOL includeMarkedForDeletionOnly;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectIDs:(id)a0;

@end
