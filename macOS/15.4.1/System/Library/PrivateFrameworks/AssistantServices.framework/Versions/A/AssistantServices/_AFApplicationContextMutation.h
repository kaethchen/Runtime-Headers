@class AFApplicationContext, NSString, AceObject, AFBulletin, NSDictionary, NSArray;

@interface _AFApplicationContextMutation : NSObject <AFApplicationContextMutating> {
    AFApplicationContext *_base;
    NSString *_associatedBundleIdentifier;
    AFBulletin *_bulletin;
    AceObject *_aceContext;
    NSDictionary *_contextDictionary;
    NSArray *_aceContexts;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasAssociatedBundleIdentifier : 1; unsigned char hasBulletin : 1; unsigned char hasAceContext : 1; unsigned char hasContextDictionary : 1; unsigned char hasAceContexts : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isDirty;
- (void)setAceContexts:(id)a0;
- (id)getAceContext;
- (id)getAceContexts;
- (id)getAssociatedBundleIdentifier;
- (id)getBulletin;
- (id)getContextDictionary;
- (id)initWithBase:(id)a0;
- (void)setAceContext:(id)a0;
- (void)setAssociatedBundleIdentifier:(id)a0;
- (void)setBulletin:(id)a0;
- (void)setContextDictionary:(id)a0;

@end
