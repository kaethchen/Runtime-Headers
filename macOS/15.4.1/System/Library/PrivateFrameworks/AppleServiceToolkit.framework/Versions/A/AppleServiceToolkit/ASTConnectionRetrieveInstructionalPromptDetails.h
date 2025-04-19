@class NSDictionary;

@interface ASTConnectionRetrieveInstructionalPromptDetails : ASTMaterializedConnection {
    NSDictionary *_rawBody;
}

- (void).cxx_destruct;
- (id)endpoint;
- (id)rawBody;
- (id)initWithInstructionID:(id)a0 type:(id)a1 language:(id)a2 locale:(id)a3;

@end
