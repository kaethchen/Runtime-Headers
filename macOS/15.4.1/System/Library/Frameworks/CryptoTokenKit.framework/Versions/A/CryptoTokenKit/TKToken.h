@class TKTokenID, TKTokenDriver, TKTokenConfiguration, TKTokenKeychainContents;
@protocol TKTokenDelegate;

@interface TKToken : NSObject {
    TKTokenConfiguration *_configuration;
}

@property (retain) TKTokenKeychainContents *keychainContents;
@property (readonly) TKTokenID *tokenID;
@property (readonly) TKTokenDriver *tokenDriver;
@property (weak) id<TKTokenDelegate> delegate;
@property (readonly) TKTokenConfiguration *configuration;

- (id)description;
- (void).cxx_destruct;
- (void)terminate;
- (id)initWithTokenDriver:(id)a0 instanceID:(id)a1;

@end
