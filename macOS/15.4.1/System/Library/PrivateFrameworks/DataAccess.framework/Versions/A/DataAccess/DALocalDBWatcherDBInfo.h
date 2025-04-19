@class NSString, NSMutableDictionary;

@interface DALocalDBWatcherDBInfo : NSObject

@property (readonly, nonatomic) NSString *path;
@property (nonatomic) int lastSavedSequenceNumber;
@property (retain, nonatomic) NSMutableDictionary *blocksByConcernedParty;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0;
- (void)addBlock:(id /* block */)a0 forConcernedParty:(id)a1 account:(id)a2;
- (id)allBlocks;
- (id)allConcernedParties;
- (void)removeBlockForConcernedParty:(id)a0 account:(id)a1;

@end
