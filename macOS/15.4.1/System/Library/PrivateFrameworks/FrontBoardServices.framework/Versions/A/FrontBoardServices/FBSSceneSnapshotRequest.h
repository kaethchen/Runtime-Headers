@class NSString, FBSSceneSettings;
@protocol FBSSceneSnapshotRequestDelegate;

@interface FBSSceneSnapshotRequest : NSObject <BSXPCCoding> {
    BOOL _handled;
}

@property (copy, nonatomic) NSString *sceneID;
@property (weak, nonatomic) id<FBSSceneSnapshotRequestDelegate> delegate;
@property (readonly, copy, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) BOOL allowsProtectedContent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)initWithSettings:(id)a0 allowsProtectedContent:(BOOL)a1;
- (BOOL)performSnapshotWithContext:(id)a0;

@end
