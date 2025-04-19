@class NSString;

@interface CNCDInMemoryPersistenceBackendAccountDescription : NSObject

@property (readonly, copy) NSString *name;
@property (readonly) long long type;
@property (readonly, getter=isWritable) BOOL writable;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(long long)a1 writable:(BOOL)a2;

@end
