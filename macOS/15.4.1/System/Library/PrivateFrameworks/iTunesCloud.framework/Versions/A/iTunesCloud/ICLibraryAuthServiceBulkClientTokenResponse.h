@class NSString, NSDictionary, NSMutableDictionary;

@interface ICLibraryAuthServiceBulkClientTokenResponse : NSObject <NSCopying> {
    NSDictionary *_responseDictionary;
    NSMutableDictionary *_parsedTokenResults;
}

@property (readonly, copy, nonatomic) NSString *serverInstance;
@property (readonly, copy, nonatomic) NSDictionary *tokenResults;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)a0;
- (id)tokenResultForAccountDSID:(id)a0;

@end
