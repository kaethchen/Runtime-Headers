@class NSArray, NSString, TKCTKDConnection;

@interface TKClientToken : NSObject

@property (class, readonly, nonatomic) NSArray *builtinTokenIDs;

@property (readonly, nonatomic) TKCTKDConnection *ctkdConnection;
@property (readonly, nonatomic) NSString *tokenID;

- (void).cxx_destruct;
- (id)initWithTokenID:(id)a0;
- (id)initWithTokenID:(id)a0 ctkdConnection:(id)a1;
- (id)_initWithTokenID:(id)a0;
- (id)initWithTokenID:(id)a0 serverEndpoint:(id)a1 targetUID:(id)a2;
- (id)sessionWithLAContext:(id)a0 error:(id *)a1;

@end
