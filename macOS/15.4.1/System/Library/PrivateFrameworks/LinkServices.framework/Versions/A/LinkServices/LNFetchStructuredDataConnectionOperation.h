@class NSDictionary, NSArray;

@interface LNFetchStructuredDataConnectionOperation : LNInterfaceConnectionOperation

@property (retain, nonatomic) NSDictionary *entityIdentifiersToStructuredData;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long typeIdentifier;
@property (readonly, nonatomic) NSArray *entityIdentifiers;

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 typeIdentifier:(long long)a1 entityIdentifiers:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;

@end
