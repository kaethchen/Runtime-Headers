@class NSString;

@interface CNNoteDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isNotesLegacyAccess;

- (id)init;
- (id)coreDataKey;
- (id)coreDataRelationship;
- (void)decodeUsingCoder:(id)a0 contact:(id)a1;
- (void)encodeUsingCoder:(id)a0 contact:(id)a1;
- (BOOL)isEqualForContact:(id)a0 other:(id)a1;
- (id)CNValueForContact:(id)a0;
- (void)copyFromCoreDataContact:(id)a0 toContact:(id)a1;
- (id)coreDataOwnedEntityKey;
- (id)coreDataOwnedEntityName;
- (BOOL)isNonnull;
- (id)nilValue;
- (void)setCNValue:(id)a0 onContact:(id)a1;

@end
