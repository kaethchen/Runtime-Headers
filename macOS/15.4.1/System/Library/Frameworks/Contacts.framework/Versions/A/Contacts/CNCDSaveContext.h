@class NSManagedObjectContext, CNCDRecordSaveCache, CNSaveRequest, CNCDPersistenceContext;

@interface CNCDSaveContext : NSObject

@property (readonly) CNSaveRequest *saveRequest;
@property (readonly) CNCDPersistenceContext *persistenceContext;
@property (readonly) NSManagedObjectContext *context;
@property (readonly) CNCDRecordSaveCache *contactCache;
@property (readonly) CNCDRecordSaveCache *groupCache;
@property (readonly) CNCDRecordSaveCache *containerCache;

- (void).cxx_destruct;
- (id)initWithSaveRequest:(id)a0 persistenceContext:(id)a1 context:(id)a2;

@end
