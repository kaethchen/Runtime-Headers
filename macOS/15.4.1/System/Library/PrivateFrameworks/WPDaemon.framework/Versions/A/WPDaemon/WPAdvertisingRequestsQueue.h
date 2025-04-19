@class NSMutableArray, NSMutableSet;

@interface WPAdvertisingRequestsQueue : NSObject

@property (retain, nonatomic) NSMutableArray *queue;
@property (retain, nonatomic) NSMutableSet *clientTypes;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (void)remove:(id)a0;
- (void)add:(id)a0;
- (void)removeAll;
- (id)allRequests;
- (BOOL)isAdvertisingForClientType:(unsigned char)a0;
- (void)removeRequestsOfClientType:(unsigned char)a0;

@end
