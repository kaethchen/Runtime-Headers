@class NSManagedObjectContext;

@interface ICNFMCManagedObjectContextManager : NSObject

@property (readonly, weak, nonatomic) NSManagedObjectContext *context;

+ (void)attachContextManagerWithOptions:(unsigned long long)a0 toContext:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_contextDidSave:(id)a0;
- (id)initWithOptions:(unsigned long long)a0 context:(id)a1;

@end
