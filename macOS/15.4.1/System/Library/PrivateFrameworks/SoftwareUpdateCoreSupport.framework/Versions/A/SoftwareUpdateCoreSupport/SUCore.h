@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SUCore : NSObject

@property (retain, nonatomic) NSString *baseDomain;
@property (retain, nonatomic) NSString *filesystemBaseDir;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *waitedOperationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *miscellaneousTaksQueue;

+ (id)stringFromDate:(id)a0;
+ (id)sharedCore;
+ (BOOL)stringIsEqual:(id)a0 to:(id)a1;
+ (id)errorNameForCode:(long long)a0;
+ (BOOL)objectIsEqual:(id)a0 to:(id)a1;
+ (BOOL)dataIsEqual:(id)a0 to:(id)a1;
+ (BOOL)dateIsEqual:(id)a0 to:(id)a1;
+ (BOOL)arrayIsEqual:(id)a0 to:(id)a1;
+ (id)beginTransactionWithName:(id)a0;
+ (BOOL)dictionaryIsEqual:(id)a0 to:(id)a1;
+ (void)endTransaction:(id)a0 withName:(id)a1;
+ (BOOL)errorIsEqual:(id)a0 to:(id)a1;
+ (id)getFileMetadata:(const char *)a0 forKey:(id)a1;
+ (id)limitString:(id)a0 toMaxLength:(unsigned long long)a1 providingSubstitutionMap:(id)a2;
+ (BOOL)numberIsEqual:(id)a0 to:(id)a1;
+ (BOOL)setFileMetadata:(const char *)a0 forKey:(id)a1 value:(id)a2;
+ (id)sharedSUCoreDomainAppending:(id)a0;
+ (id)stringFromTriState:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)useDomain:(id)a0;
- (id)buildError:(long long)a0 underlying:(id)a1 description:(id)a2;
- (id)commonDomain;
- (id)commonFilesystemBaseDir;
- (id)selectCompletionQueue:(id)a0;
- (id)selectDelegateCallbackQueue:(id)a0;
- (void)useFilesystemBaseDir:(id)a0;

@end
