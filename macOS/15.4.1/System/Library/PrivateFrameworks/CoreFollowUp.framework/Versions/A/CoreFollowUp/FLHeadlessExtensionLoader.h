@class NSString, NSUUID, FLExtensionContext, NSExtension;
@protocol FLExtensionHostContextInterface;

@interface FLHeadlessExtensionLoader : NSObject {
    FLExtensionContext *_extensionContext;
    id<FLExtensionHostContextInterface> _delegate;
    NSExtension *_extension;
}

@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSUUID *sessionID;
@property (copy) id /* block */ requestInterruptionBlock;

+ (BOOL)_isBundleExecutableAppleSigned:(id)a0;
+ (id)sharedExtensionQueue;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (void)_terminate;
- (id)remoteInterface;
- (BOOL)_loadExtension:(id *)a0;
- (id)_hostContextForExtension:(id)a0;
- (id)_loadExtensionForIdentifier:(id)a0 error:(id *)a1;
- (BOOL)_setupSessionIfNeeded:(id *)a0;
- (id)initWithFollowUp:(id)a0 andDelegate:(id)a1;

@end
