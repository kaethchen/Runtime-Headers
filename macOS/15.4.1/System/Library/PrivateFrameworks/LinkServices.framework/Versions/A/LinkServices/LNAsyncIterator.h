@class LNConnection, LNAsyncIteratorReference;

@interface LNAsyncIterator : NSObject <NSCopying>

@property (readonly, copy, nonatomic) LNConnection *connection;
@property (readonly, copy, nonatomic) LNAsyncIteratorReference *reference;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithReference:(id)a0 connection:(id)a1;
- (void)nextResultsWithCompletionHandler:(id /* block */)a0;

@end
