@class ICNFMCMemoryDataSource;

@interface _ICNFMCMemoryMessage : ICNFMCMessage {
    ICNFMCMemoryDataSource *_dataSource;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (BOOL)isCompacted;
- (id)primitiveDataSource;
- (id)messageDataIncludingFromSpace:(BOOL)a0 newDocumentID:(id)a1;

@end
