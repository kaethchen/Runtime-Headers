@class AceObject, NSString, NSIndexPath;

@interface AFConversationInsertion : NSObject

@property (readonly, nonatomic) long long conversationItemType;
@property (readonly, nonatomic) AceObject *aceObject;
@property (readonly, copy, nonatomic) NSString *aceCommandIdentifier;
@property (readonly, nonatomic, getter=isTransient) BOOL transient;
@property (readonly, nonatomic, getter=isSupplemental) BOOL supplemental;
@property (readonly, nonatomic, getter=isImmersiveExperience) BOOL immersiveExperience;
@property (readonly, nonatomic, getter=isPersistentAcrossInvocations) BOOL persistentAcrossInvocations;
@property (readonly, nonatomic) NSIndexPath *indexPath;

- (void).cxx_destruct;
- (id)initWithConversationItemType:(long long)a0 aceObject:(id)a1 aceCommandIdentifier:(id)a2 transient:(BOOL)a3 supplemental:(BOOL)a4 immersiveExperience:(BOOL)a5 persistentAcrossInvocations:(BOOL)a6 indexPath:(id)a7;

@end
