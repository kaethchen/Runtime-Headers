@class NSString, CADDatabaseInitializationOptions, NSMutableDictionary, NSHashTable, NSObject;
@protocol CADDatabaseConnectionPoolManager, OS_dispatch_workloop;

@interface CADDatabaseConnectionPool : NSObject <CalCalendarDatabaseIntegrityErrorReportingDelegate, CADDatabaseConnectionProvider> {
    id<CADDatabaseConnectionPoolManager> _manager;
    CADDatabaseInitializationOptions *_initOptions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_workloop> *_lowPriorityTasks;
    BOOL _needCheckAuxDatabaseSequenceAndRestoreGeneration;
    int _auxDatabaseSequence;
    int _databaseRestoreGeneration;
    NSMutableDictionary *_pools;
    NSHashTable *_clients;
    NSHashTable *_delegates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (int)databaseRestoreGeneration;
- (unsigned long long)numberOfClients;
- (void)_checkGenerationAndAuxDatabaseSequence:(BOOL *)a0;
- (id)_openDatabases;
- (id)_pools;
- (void)addCreatedAuxDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)a0;
- (id)createConnectionForPool:(id)a0;
- (void)databaseChangedExternally:(id)a0 auxDatabaseID:(int)a1;
- (void)forEachDelegate:(id /* block */)a0;
- (id)initWithOptions:(id)a0 manager:(id)a1;
- (void)notifyDelegatesGenerationChanged;
- (BOOL)performASAPWithConfiguration:(id)a0 databaseID:(int)a1 block:(id /* block */)a2;
- (void)performWithAllDatabasesWithConfiguration:(id)a0 priority:(unsigned long long)a1 block:(id /* block */)a2;
- (BOOL)performWithConfiguration:(id)a0 priority:(unsigned long long)a1 databaseID:(int)a2 block:(id /* block */)a3;
- (void)prepareDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)a0 forUseWithConfiguration:(id)a1;
- (void)purgeConnectionsLastUsedPriorTo:(unsigned long long)a0 stats:(struct { int x0; int x1; unsigned long long x2; } *)a1;
- (void)reportIntegrityErrors:(id)a0;
- (void)setupDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)a0;

@end
