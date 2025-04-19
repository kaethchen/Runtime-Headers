@class NSDictionary;

@interface CKDRemoveAnonymousShareFromSharedDBOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove;
@property (copy, nonatomic) id /* block */ anonymousShareRemovedBlock;

+ (id)nameForState:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)main;
- (id)activityCreate;
- (int)operationType;
- (void)_removeAnonymousShareFromSharedDB;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (BOOL)makeStateTransition;

@end
