@class NSURL, NSString;

@interface CADDiagnosticsDatabaseCollectorDBInfo : NSObject {
    NSURL *_outputURL;
    NSURL *_walOutputURL;
    struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *_mainDatabase;
    void *_auxDatabase;
    NSString *_movedAsideDatabasePath;
}

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)backupDatabaseFromPath:(id)a0 toPath:(id)a1 context:(id)a2;
- (void)collect:(id)a0;
- (void)collectMovedAsideDatabase:(id)a0;
- (BOOL)collectMovedAsideDatabaseWithoutRedacting:(id)a0;
- (void)collectStandardDatabase:(id)a0;
- (void)determineExpectedOutputFiles:(id)a0;
- (id)initWithMainDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)a0 auxDatabase:(void *)a1 context:(id)a2;
- (id)initWithMainDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; int x1; struct CPRecordStore *x2; struct CalEventOccurrenceCache *x3; struct CalScheduledTaskCache *x4; void *x5; void *x6; struct __CFDictionary *x7; struct __CFDictionary *x8; struct os_unfair_lock_s { unsigned int x0; } x9; unsigned int x10; unsigned int x11; struct __CFArray *x12; struct __CFString *x13; struct __CFArray *x14; int x15; int x16; struct __CFString *x17; struct __CFURL *x18; struct __CFString *x19; struct __CFString *x20; unsigned long long x21; int x22; int x23; int x24; id /* block */ x25; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x26; BOOL x27; struct __CFArray *x28; BOOL x29; struct __CFSet *x30; id x31; id x32; id x33; int x34; id x35; id x36; id x37; char *x38; unsigned int x39; unsigned int x40; int x41; unsigned long long x42; BOOL x43; BOOL x44; BOOL x45; BOOL x46; BOOL x47; BOOL x48; BOOL x49; } *)a0 context:(id)a1;
- (id)initWithPossiblyUnmigratedDatabaseDirectory:(id)a0 context:(id)a1;
- (BOOL)redactAndCollectMovedAsideDatabase:(id)a0;
- (BOOL)redactAndCompress:(id)a0 context:(id)a1;

@end
