@class Protocol, NFUnfairLock, NSHashTable;

@interface NFMultiDelegate : NSObject

@property (readonly, nonatomic) NSHashTable *children;
@property (readonly, nonatomic) Protocol *delegateProtocol;
@property (retain, nonatomic) NFUnfairLock *lock;
@property (readonly, nonatomic) id delegate;

- (BOOL)conformsToProtocol:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)initWithDelegate:(id)a0 delegateProtocol:(id)a1;
- (id)initWithDelegate:(id)a0 delegateProtocol:(id)a1 options:(unsigned long long)a2;
- (void)replaceDelegate:(id)a0 withDelegate:(id)a1;

@end
