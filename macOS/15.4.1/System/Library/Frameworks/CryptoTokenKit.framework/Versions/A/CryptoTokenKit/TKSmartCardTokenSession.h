@class TKSmartCard;

@interface TKSmartCardTokenSession : TKTokenSession {
    TKSmartCard *_smartCard;
    BOOL _hasSession;
    TKSmartCard *_errorCard;
}

@property (readonly) TKSmartCard *smartCard;

- (id)name;
- (void).cxx_destruct;
- (id)initWithToken:(id)a0;
- (void)endRequest;
- (void)beginRequest;

@end
