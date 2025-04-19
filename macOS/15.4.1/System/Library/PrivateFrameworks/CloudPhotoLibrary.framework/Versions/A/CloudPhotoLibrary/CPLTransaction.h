@class NSString;

@interface CPLTransaction : NSObject {
    BOOL _dirty;
}

@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)transactions;
+ (unsigned long long)transactionCount;
+ (void)beginTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;
+ (void)endTransactionWithIdentifier:(id)a0;
+ (id)newTransactionWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)endTransaction;
- (id)initWithIdentifier:(id)a0 description:(id)a1 keepPower:(BOOL)a2;

@end
