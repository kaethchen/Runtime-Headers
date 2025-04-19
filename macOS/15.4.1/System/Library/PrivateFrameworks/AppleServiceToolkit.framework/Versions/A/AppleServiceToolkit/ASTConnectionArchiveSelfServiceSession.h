@class NSDictionary;

@interface ASTConnectionArchiveSelfServiceSession : ASTMaterializedConnection {
    NSDictionary *_rawBody;
}

- (void).cxx_destruct;
- (id)endpoint;
- (void)setSessionId:(id)a0;
- (id)rawBody;

@end
