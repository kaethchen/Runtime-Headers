@class NSSet;

@interface ABSmartGroup : ABGroup {
    NSSet *_cachedMembers;
}

+ (id)os_log;
+ (id)builtInProperties;
+ (id)nts_RecordFromDictionaryRepresentation:(id)a0 withRecordMapping:(id)a1 addressBook:(id)a2 generateIds:(BOOL)a3;
+ (id)smartGroups;

- (void)dealloc;
- (id)members;
- (id)dictionaryRepresentation;
- (id)subgroups;
- (BOOL)addMember:(id)a0;
- (BOOL)removeMember:(id)a0;
- (id)parentGroups;
- (BOOL)canDeletePeople;
- (BOOL)removeSubgroup:(id)a0;
- (id)uniqueIdForDrag;
- (BOOL)_isSmartGroupParentOfRecord:(id)a0;
- (id)_members;
- (void)_setCachedMembers:(id)a0;
- (BOOL)_shouldAssignNewDatabaseImplToAccount;
- (BOOL)addSubgroup:(id)a0;
- (BOOL)canRemoveMembers;
- (id)distributionIdentifierForProperty:(id)a0 person:(id)a1;
- (BOOL)isModified;
- (BOOL)isPublishable;
- (id)nts_DescriptionDictionary;
- (BOOL)nts_IsModified;
- (id)nts_Members;
- (id)nts_SearchElement;
- (void)nts_SetIsModified:(BOOL)a0;
- (void)nts_SetSearchElement:(id)a0;
- (void)nts_SetTracksModification:(BOOL)a0;
- (id)nts_Subgroups;
- (BOOL)nts_TracksModification;
- (id)searchElement;
- (BOOL)setDistributionIdentifier:(id)a0 forProperty:(id)a1 person:(id)a2;
- (void)setIsModified:(BOOL)a0;
- (void)setSearchElement:(id)a0;
- (void)setTracksModification:(BOOL)a0;
- (BOOL)supportsDistributionList;
- (BOOL)tracksModification;

@end
