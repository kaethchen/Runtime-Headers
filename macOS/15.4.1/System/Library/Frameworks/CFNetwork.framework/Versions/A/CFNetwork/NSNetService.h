@class NSString, NSArray;
@protocol NSNetServiceDelegate;

@interface NSNetService : NSObject {
    id _netService;
    id _delegate;
    id _reserved;
}

@property id<NSNetServiceDelegate> delegate;
@property BOOL includesPeerToPeer;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *type;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSString *hostName;
@property (readonly, copy) NSArray *addresses;
@property (readonly) long long port;

+ (id)dataFromTXTRecordDictionary:(id)a0;
+ (id)dictionaryFromTXTRecordData:(id)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)publish;
- (id)initWithDomain:(id)a0 type:(id)a1 name:(id)a2;
- (id)initWithDomain:(id)a0 type:(id)a1 name:(id)a2 port:(int)a3;
- (void)resolveWithTimeout:(double)a0;
- (void)stop;
- (void)resolve;
- (void)startMonitoring;
- (void)stopMonitoring;
- (id)TXTRecordData;
- (void)_setIncludesAWDL:(BOOL)a0;
- (BOOL)getInputStream:(out id *)a0 outputStream:(out id *)a1;
- (id)initWithCFNetService:(struct __CFNetService { } *)a0;
- (void)publishWithOptions:(unsigned long long)a0;
- (BOOL)setTXTRecordData:(id)a0;

@end
