@class NSDictionary, NSMutableDictionary;

@interface VCPTextTokenizer : NSObject {
    NSDictionary *_encoder;
    NSDictionary *_decoder;
    NSDictionary *_bytesToUnicode;
    NSDictionary *_bpeRanks;
    NSMutableDictionary *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (id)encode:(id)a0;
- (id)bytePairEncoding:(id)a0;
- (id)textPreProcessing:(id)a0;
- (id)whitespaceClean:(id)a0;

@end
