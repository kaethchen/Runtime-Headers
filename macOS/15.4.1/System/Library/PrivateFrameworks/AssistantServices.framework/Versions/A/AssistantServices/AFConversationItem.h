@class NSString, AFMutableConversationItem;

@interface AFConversationItem : NSObject <AFConversationStorable, NSCopying> {
    AFMutableConversationItem *_delegateItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)identifier;
- (long long)type;
- (BOOL)isTransient;
- (long long)presentationState;
- (id)revisionIdentifier;
- (id)dialogPhase;
- (id)aceCommandIdentifier;
- (id)aceObject;
- (id)associatedDataStore;
- (id)initWithDelegateItem:(id)a0;
- (id)initWithIdentifier:(id)a0 revisionIdentifier:(id)a1 type:(long long)a2 aceObject:(id)a3 dialogPhase:(id)a4 presentationState:(long long)a5 aceCommandIdentifier:(id)a6 virgin:(BOOL)a7 transient:(BOOL)a8 supplemental:(BOOL)a9 immersiveExperience:(BOOL)a10 persistentAcrossInvocations:(BOOL)a11 associatedDataStore:(id)a12;
- (id)initWithType:(long long)a0 aceObject:(id)a1 dialogPhase:(id)a2 presentationState:(long long)a3 aceCommandIdentifier:(id)a4 virgin:(BOOL)a5 transient:(BOOL)a6 supplemental:(BOOL)a7 immersiveExperience:(BOOL)a8 persistentAcrossInvocations:(BOOL)a9 associatedDataStore:(id)a10;
- (BOOL)isImmersiveExperience;
- (BOOL)isPersistentAcrossInvocations;
- (BOOL)isSupplemental;
- (BOOL)isVirgin;

@end
