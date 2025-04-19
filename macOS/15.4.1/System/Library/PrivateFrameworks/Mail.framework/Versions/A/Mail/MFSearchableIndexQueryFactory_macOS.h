@class NSString, EMSearchableIndexQueryExpression;

@interface MFSearchableIndexQueryFactory_macOS : NSObject

@property (class, readonly) EMSearchableIndexQueryExpression *highestPriorityMessageExpression;
@property (class, readonly) EMSearchableIndexQueryExpression *lowestPriorityMessageExpression;

@property (readonly, nonatomic) NSString *emailContentType;
@property (readonly, nonatomic) NSString *attachmentFormatString;

+ (id)defaultFactory;
+ (id)_scopedExpressionWithExpression:(id)a0 identifiers:(id)a1 attribute:(id)a2;
+ (id)accountScopedExpressionWithExpression:(id)a0 accountIdentifiers:(id)a1;
+ (id)expressionForMessagePriority:(long long)a0;
+ (id)mailboxScopedExpressionWithExpression:(id)a0 mailboxURLStrings:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)expressionForAllMailboxesWithExpression:(id)a0 excludedMailboxesExpression:(id)a1 forUnreadCount:(BOOL)a2 includeAttachmentCriterion:(BOOL)a3;
- (id)expressionFromExpression:(id)a0 includeAttachmentCriterion:(BOOL)a1;
- (id)queryStringForAllMailboxesWithQueryString:(id)a0 excludedMailboxesQueryString:(id)a1 forUnreadCount:(BOOL)a2 includeAttachmentCriterion:(BOOL)a3;

@end
