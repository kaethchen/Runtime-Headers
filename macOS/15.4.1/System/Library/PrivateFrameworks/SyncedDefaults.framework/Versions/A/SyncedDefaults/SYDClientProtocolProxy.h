@protocol SYDClientProtocol;

@interface SYDClientProtocolProxy : NSObject <SYDClientProtocol>

@property (weak, nonatomic) id<SYDClientProtocol> target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)a0;
- (void)storeDidChangeWithStoreID:(id)a0 changeDictionary:(id)a1;

@end
