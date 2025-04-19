@class NSData;

@interface ABCDProviderMetadata : NSObject

@property (nonatomic) long long version;
@property (retain, nonatomic) NSData *pageData;
@property (retain, nonatomic) NSData *syncAnchorData;

- (void).cxx_destruct;
- (id)initWithCoreDataProviderMetadata:(id)a0;

@end
