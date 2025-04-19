@class NSString, NSSet;

@interface EMMailboxScope : NSObject <EFCacheable, EFPubliclyDescribable, NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly, nonatomic) EMMailboxScope *allMailboxesScope;
@property (class, readonly, nonatomic) EMMailboxScope *noMailboxesScope;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *mailboxTypes;
@property (readonly, nonatomic) BOOL excludeTypes;
@property (readonly, copy, nonatomic) NSSet *mailboxObjectIDs;
@property (readonly, nonatomic) BOOL excludeMailboxes;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mailboxScopeForMailboxObjectIDs:(id)a0 forExclusion:(BOOL)a1;
+ (id)mailboxScopeForMailboxType:(long long)a0 forExclusion:(BOOL)a1;
+ (id)mailboxScopeForMailboxTypes:(id)a0 forExclusion:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cachedSelf;
- (id)allMailboxObjectIDsWithMailboxTypeResolver:(id)a0 forExclusion:(BOOL *)a1;
- (BOOL)scopeContainsMailbox:(id)a0;
- (BOOL)scopeContainsMailboxObjectID:(id)a0 mailboxTypeResolver:(id)a1;
- (void)_calculateHash;
- (id)_mailboxObjectIDsDescription;
- (id)_mailboxObjectIDsForTypesWithMailboxTypeResolver:(id)a0;
- (id)_mailboxTypesDescription;
- (BOOL)_scopeContainsMailboxWithObjectID:(id)a0 mailboxTypeBlock:(id /* block */)a1;
- (BOOL)containsOnlyInboxType;
- (id)initWithMailboxTypes:(id)a0 excludeTypes:(BOOL)a1 mailboxObjectIDs:(id)a2 excludeMailboxes:(BOOL)a3;
- (id)initWithMailboxTypes:(id)a0 excludeTypes:(BOOL)a1 mailboxObjectIDs:(id)a2 excludeMailboxes:(BOOL)a3 cached:(BOOL)a4;
- (id)mailboxScopeByAddingMailboxes:(id)a0;
- (id)mailboxScopeByRemovingMailboxes:(id)a0;

@end
