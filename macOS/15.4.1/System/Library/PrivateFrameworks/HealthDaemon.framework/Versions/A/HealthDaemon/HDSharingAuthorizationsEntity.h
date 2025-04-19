@interface HDSharingAuthorizationsEntity : HDHealthEntity

+ (long long)protectionClass;
+ (id)databaseTable;
+ (BOOL)addSharingAuthorizations:(id)a0 forRecipientIdentifier:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)deleteAllMarkedSharingAuthorizationsWithTransaction:(id)a0 error:(id *)a1;
+ (BOOL)deleteAllSharingAuthorizationsForRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteSharingAuthorizations:(id)a0 recipientIdentifier:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (BOOL)insertOrReplaceWithRecipientIdentifier:(id)a0 sharingAuthorizations:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (BOOL)markSharingAuthorizationsForDeletion:(id)a0 recipientIdentifier:(id)a1 databaseTransaction:(id)a2 error:(id *)a3;
+ (id)recipientIdentifiersForSharingAuthorization:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)sharingAuthorizationsForRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)sharingAuthorizationsForRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 includeMarkedForDeletion:(BOOL)a2 error:(id *)a3;
+ (id)sharingAuthorizationsMarkedForDeletionForRecipientIdentifier:(id)a0 databaseTransaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;

@end
