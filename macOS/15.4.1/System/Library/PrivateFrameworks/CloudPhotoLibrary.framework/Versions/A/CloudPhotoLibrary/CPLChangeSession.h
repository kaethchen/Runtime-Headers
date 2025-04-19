@class CPLLibraryManager, NSString, NSProgress, CPLPlatformObject;

@interface CPLChangeSession : NSObject <CPLAbstractObject>

@property (class, readonly) NSString *shortDescription;

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSProgress *sessionProgress;
@property (readonly, nonatomic) NSString *sessionIdentifier;
@property (readonly, nonatomic) CPLLibraryManager *libraryManager;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stateDescriptionForState:(unsigned long long)a0;
+ (id)platformImplementationProtocol;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)finalizeWithCompletionHandler:(id /* block */)a0;
- (id)initWithLibraryManager:(id)a0;
- (id)createSessionContext;
- (void)beginSessionWithKnownLibraryVersion:(id)a0 resetTracker:(id)a1 completionHandler:(id /* block */)a2;
- (void)tearDownWithCompletionHandler:(id /* block */)a0;

@end
