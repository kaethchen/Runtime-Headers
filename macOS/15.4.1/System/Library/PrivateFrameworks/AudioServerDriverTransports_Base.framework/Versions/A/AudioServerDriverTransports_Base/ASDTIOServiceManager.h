@class ASDTCondition, NSString, NSMutableDictionary, NSArray, NSMutableArray, ASDTIOServiceMatcher;

@interface ASDTIOServiceManager : NSObject <ASDTIOServiceMatchDelegate>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *idProperty;
@property (retain, nonatomic) NSString *ioServiceClassName;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSMutableDictionary *ioServices;
@property (retain, nonatomic) NSMutableDictionary *ioServicesByIdentifier;
@property (retain, nonatomic) ASDTIOServiceMatcher *matcher;
@property (retain, nonatomic) ASDTCondition *cond;
@property (readonly, nonatomic) NSArray *delegateList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)get;
+ (void)resetAll;
+ (id)dependencyForConfiguration:(id)a0;
+ (id)dependencyForID:(id)a0 andConfiguration:(id)a1;
+ (id)dependencyForIdentifier:(id)a0 andConfiguration:(id)a1;
+ (id)forIOServiceWithClassName:(id)a0;
+ (id)forIOServiceWithClassName:(id)a0 withIDProperty:(id)a1 managerClass:(Class)a2;
+ (id)ioServiceClassName;
+ (id)ioServiceIDProperty;
+ (Class)ioServiceMatcherClass;
+ (id)matchedIOServiceForID:(id)a0;

- (void).cxx_destruct;
- (void)reset;
- (void)removeDelegate:(id)a0;
- (id)allocateMatcher;
- (void)addDelegate:(id)a0 forIDValues:(id)a1;
- (id)createIOServiceForIOObject:(unsigned int)a0 andIDValue:(id)a1;
- (id)findOrAddIOServiceForID:(id)a0;
- (id)getIdentifierForIOObject:(unsigned int)a0 withProperties:(id)a1;
- (id)initForIOServiceWithClassName:(id)a0 andIDProperty:(id)a1;
- (BOOL)ioServiceCanBeAdded:(id)a0;
- (void)ioServiceWillTerminate:(unsigned int)a0 withProperties:(id)a1;
- (void)matchedIOService:(unsigned int)a0 withProperties:(id)a1;
- (id)matchedIOServiceForID:(id)a0;
- (id)serviceForIOObject:(unsigned int)a0 andIDValue:(id)a1;

@end
