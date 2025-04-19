@class NSString, REMObjectID;

@interface REMSmartListsDataViewInvocation_fetchSmartList : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *smartListType;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (nonatomic) BOOL createIfNeeded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSmartListType:(id)a0 objectID:(id)a1 createIfNeeded:(BOOL)a2;

@end
