@class NSError, NSArray;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

@interface MPServerObjectDatabaseImportResult : NSObject

@property (readonly, nonatomic) id annotatedPayload;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> trustProvider;
@property (readonly, nonatomic) NSArray *playableAssetIdentifiers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAnnotatedPayload:(id *)a0 playableAssetIdentifiers:(id)a1 error:(id)a2;

@end
