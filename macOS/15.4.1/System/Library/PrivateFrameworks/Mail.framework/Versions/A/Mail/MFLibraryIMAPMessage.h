@class MFIMAPAccount, MCMessageHeaders;

@interface MFLibraryIMAPMessage : MFLibraryMessage {
    MCMessageHeaders *_headers;
}

@property (readonly, nonatomic) MFIMAPAccount *account;

- (void).cxx_destruct;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (void)setHeaders:(id)a0;
- (id)headersFetchIfNotAvailable:(BOOL)a0;

@end
