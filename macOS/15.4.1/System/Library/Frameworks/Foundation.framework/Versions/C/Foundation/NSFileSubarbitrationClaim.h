@class NSArray, NSXPCConnection, NSMutableSet, NSFileAccessNode, NSMutableDictionary;

@interface NSFileSubarbitrationClaim : NSFileAccessClaim {
    NSArray *_readingURLs;
    unsigned long long _readingOptions;
    NSArray *_writingURLs;
    unsigned long long _writingOptions;
    NSArray *_readingLocations;
    NSArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    NSMutableSet *_forwardedClaimIDs;
    NSMutableDictionary *_readRelinquishmentsByPresenterID;
    NSMutableDictionary *_writeRelinquishmentsByPresenterID;
}

@property (readonly) BOOL nullified;
@property (retain) NSXPCConnection *subarbiterConnection;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)granted;
- (void)revoked;
- (id)descriptionWithIndenting:(id)a0;
- (void)devalueOldClaim:(id)a0;
- (void)devalueSelf;
- (void)evaluateNewClaim:(id)a0;
- (BOOL)evaluateSelfWithRootNode:(id)a0 checkSubarbitrability:(BOOL)a1;
- (void)forwardReacquisitionForWritingClaim:(BOOL)a0 withID:(in id)a1 toPresenterForID:(id)a2 usingReplySender:(id /* block */)a3;
- (void)forwardRelinquishmentForWritingClaim:(BOOL)a0 withID:(id)a1 options:(unsigned long long)a2 purposeID:(id)a3 subitemURL:(id)a4 toPresenter:(id)a5 usingReplySender:(id /* block */)a6;
- (void)forwardUsingConnection:(id)a0 crashHandler:(id /* block */)a1;
- (void)forwardUsingConnection:(id)a0 withServer:(id)a1 crashHandler:(id /* block */)a2;
- (id)initWithReadingURLs:(id)a0 options:(unsigned long long)a1 writingURLs:(id)a2 options:(unsigned long long)a3 claimer:(id /* block */)a4;
- (void)invokeClaimer;
- (BOOL)isBlockedByReadingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (BOOL)isBlockedByWritingItemAtLocation:(id)a0 options:(unsigned long long)a1;
- (void)itemAtLocation:(id)a0 wasReplacedByItemAtLocation:(id)a1;
- (id)relinquishmentForWrite:(BOOL)a0 toPresenterForID:(id)a1;

@end
