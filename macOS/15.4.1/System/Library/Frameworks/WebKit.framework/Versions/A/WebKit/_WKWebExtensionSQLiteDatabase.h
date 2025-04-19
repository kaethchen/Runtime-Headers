@class NSURL, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _WKWebExtensionSQLiteDatabase : NSObject

@property (readonly, nonatomic) struct sqlite3 { } *handle;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) int lastErrorCode;
@property (readonly, nonatomic) NSString *lastErrorMessage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)_errorWith_WKSQLiteErrorCode:(int)a0 userInfo:(id)a1;
+ (id)inMemoryDatabaseURL;
+ (id)privateOnDiskDatabaseURL;

- (void)dealloc;
- (void).cxx_destruct;
- (int)close;
- (BOOL)_openWithFlags:(int)a0 vfs:(id)a1 error:(id *)a2;
- (BOOL)enableWAL:(id *)a0;
- (id)initWithURL:(id)a0 queue:(id)a1;
- (BOOL)openWithAccessType:(long long)a0 error:(id *)a1;
- (BOOL)openWithAccessType:(long long)a0 protectionType:(long long)a1 vfs:(id)a2 error:(id *)a3;
- (BOOL)openWithAccessType:(long long)a0 vfs:(id)a1 error:(id *)a2;
- (BOOL)reportErrorWithCode:(int)a0 query:(id)a1 error:(id *)a2;
- (BOOL)reportErrorWithCode:(int)a0 statement:(struct sqlite3_stmt { } *)a1 error:(id *)a2;

@end
