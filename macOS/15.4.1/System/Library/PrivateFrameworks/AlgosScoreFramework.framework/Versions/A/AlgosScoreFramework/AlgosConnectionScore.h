@interface AlgosConnectionScore : NSObject {
    void *connectionData;
}

@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) BOOL debug;

+ (id)connectionScore;

- (void)dealloc;
- (id)init;
- (void)addConnectionRow:(unsigned long long)a0 ttfb:(double)a1 ttlb:(double)a2 basettfb:(double)a3 basettlb:(double)a4 weight:(double)a5 failed:(int)a6;
- (void)clearConnectionRows;
- (id)scoreConnection:(BOOL)a0 label:(id)a1;

@end
