@interface PLMediaProcessingPredicateBuilder : NSObject {
    BOOL _processed;
    BOOL _exactVersionMatch;
}

- (id)_predicateForProcessedAndExact:(id /* block */)a0 processedAndNotExact:(id /* block */)a1 unprocessedAndExact:(id /* block */)a2 unprocessedAndNotExact:(id /* block */)a3;
- (id)directPredicateWithKeyPath:(id)a0 version:(short)a1;
- (id)initWithProcessed:(BOOL)a0 exactVersionMatch:(BOOL)a1;
- (id)optimizedPredicateWithKeyPath:(id)a0 version:(short)a1;
- (id)optimizedSearchPredicateWithSearchKeyPath:(id)a0 searchVersion:(short)a1 stickerConfidenceKeyPath:(id)a2 stickConfidenceVersion:(unsigned short)a3;

@end
