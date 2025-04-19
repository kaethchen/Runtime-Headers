@interface EDMessageListItemPredicates : NSObject

+ (id)_objectIDsFromRightExpression:(id)a0;
+ (id)_predicateForAnyMailboxWithPredicate:(id)a0;
+ (id)expandedPredicateForCategoryTypePredicate:(id)a0;
+ (id)expandedPredicateForFollowUpIsActivePredicate:(id)a0;
+ (id)expandedPredicateForReadLaterIsActivePredicate:(id)a0;
+ (id)predicateForCategorizationVersionLessThanVersion:(long long)a0;
+ (id)predicateForMailboxTypePredicate:(id)a0 mailboxPersistence:(id)a1;
+ (id)predicateForMailboxURLPredicate:(id)a0 mailboxPersistence:(id)a1;
+ (id)predicateForMessageIDHeaderHashPredicate:(id)a0;
+ (id)predicateForMessagesFromVIPs:(id)a0;
+ (id)predicateForMessagesWithListIDHash:(id)a0;
+ (id)predicateForMessagesWithObjectIDsPredicate:(id)a0 objectIDConverter:(id)a1;
+ (id)predicateForMessagesWithPersistentIDs:(id)a0;
+ (id)predicateForMessagesWithRecipientExpression:(id)a0 operatorType:(unsigned long long)a1;
+ (id)predicateForNilModelVersion;
+ (id)predicateForUnauthenticatedMessages;

@end
