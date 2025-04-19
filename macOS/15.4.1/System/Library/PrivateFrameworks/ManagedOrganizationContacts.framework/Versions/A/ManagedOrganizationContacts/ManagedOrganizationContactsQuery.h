@class NSString, NSMutableArray;

@interface ManagedOrganizationContactsQuery : NSObject <ManagedOrganizationContactsResponseInterface, NSSecureCoding, NSCopying> {
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) unsigned long long rosterSearchOptions;
@property (nonatomic) unsigned long long rosterSearchBehaviors;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSMutableArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)lock;
- (void)unlock;
- (oneway void)clientRemote_deliverObject:(id)a0;
- (oneway void)clientRemote_finishWithOffset:(unsigned long long)a0 error:(id)a1;

@end
