@class NSString, NSMutableData, ICNFMCError;

@interface ICNFIMAPSimpleDownload : ICNFIMAPDownload {
    NSMutableData *_mdata;
    BOOL _knownLength;
    unsigned int _bytesFetched;
    ICNFMCError *_error;
}

@property (readonly, nonatomic) unsigned int expectedLength;
@property (nonatomic) BOOL isComplete;
@property (retain) NSString *partSectionSpecifier;
@property long long textSectionSpecifier;

- (id)description;
- (void).cxx_destruct;
- (id)data;
- (id)error;
- (void)setError:(id)a0;
- (unsigned int)bytesFetched;
- (void)addCommandsToPipeline:(id)a0 withCache:(id)a1;
- (id)createCopy;
- (void)handleFetchResult:(id)a0;
- (id)initWithUid:(unsigned int)a0;
- (id)initWithUid:(unsigned int)a0 partSectionSpecifier:(id)a1 textSectionSpecifier:(long long)a2 estimatedLength:(unsigned int)a3;
- (id)initWithUid:(unsigned int)a0 partSectionSpecifier:(id)a1 textSectionSpecifier:(long long)a2 length:(unsigned int)a3;
- (void)processResults;

@end
