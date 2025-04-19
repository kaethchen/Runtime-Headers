@interface IMDHistoryImporter : NSObject {
    float _lastProgress;
}

@property unsigned long long filesImported;
@property unsigned long long messagesImported;
@property unsigned long long messagesSkipped;
@property unsigned long long messageErrors;
@property BOOL loggingEnabled;
@property BOOL testing;

- (id)init;
- (void)_importFile:(id)a0;
- (void)_fileImported;
- (BOOL)_importHistoryFromPath:(id)a0 recursive:(BOOL)a1 database:(struct CSDBSqliteDatabase { struct __CFString *x0; struct CSDBSqliteConnection *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void *x5; void /* function */ *x6; void /* function */ *x7; BOOL x8; void *x9; int x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x11; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x12; int x13; void /* function */ *x14; void *x15; struct __CFString *x16; unsigned int x17; struct CSDBLookAsideBufferConfig { int x0; int x1; unsigned char x2 : 1; } x18; } *)a2 connection:(struct CSDBSqliteConnection { struct CSDBSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; void *x3; void /* function */ *x4; unsigned int x5; void *x6; } *)a3 isFirstRun:(BOOL)a4;
- (void)_messagesErrors:(unsigned long long)a0;
- (void)_messagesImported:(unsigned long long)a0;
- (void)_messagesSkipped:(unsigned long long)a0;
- (void)_updateProgress:(float)a0;
- (BOOL)importHistoryFromPath:(id)a0 recursive:(BOOL)a1 database:(struct CSDBSqliteDatabase { struct __CFString *x0; struct CSDBSqliteConnection *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void *x5; void /* function */ *x6; void /* function */ *x7; BOOL x8; void *x9; int x10; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; } x11; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x12; int x13; void /* function */ *x14; void *x15; struct __CFString *x16; unsigned int x17; struct CSDBLookAsideBufferConfig { int x0; int x1; unsigned char x2 : 1; } x18; } *)a2 connection:(struct CSDBSqliteConnection { struct CSDBSqliteDatabase *x0; struct sqlite3 *x1; struct __CFDictionary *x2; void *x3; void /* function */ *x4; unsigned int x5; void *x6; } *)a3;

@end
