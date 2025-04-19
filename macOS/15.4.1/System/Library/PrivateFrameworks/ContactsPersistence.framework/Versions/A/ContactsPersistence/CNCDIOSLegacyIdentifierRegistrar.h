@class CNCDIOSLegacyIdentifierRegistrarState, CNUnfairLock, NSString;
@protocol CNCDIOSLegacyIdentifierRegistrarPersistence;

@interface CNCDIOSLegacyIdentifierRegistrar : NSObject <CNCDIOSLegacyIdentifierRegistration>

@property (retain, nonatomic) CNCDIOSLegacyIdentifierRegistrarState *state;
@property (retain, nonatomic) id<CNCDIOSLegacyIdentifierRegistrarPersistence> persistence;
@property (retain, nonatomic) CNUnfairLock *lock;
@property (readonly, nonatomic) NSString *namespaceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)registrarWithInMemoryPersistenceState:(id)a0;
+ (id)registrarWithPropertyListPersistenceAtURL:(id)a0;

- (void).cxx_destruct;
- (id)initWithPersistence:(id)a0;
- (id)legacyIdentifierRegistrationsForRequest:(id)a0 error:(id *)a1;

@end
