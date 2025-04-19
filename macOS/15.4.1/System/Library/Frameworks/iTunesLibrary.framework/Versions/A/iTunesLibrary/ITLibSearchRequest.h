@class NSArray, NSString;

@interface ITLibSearchRequest : NSObject

@property (copy, nonatomic) NSArray *scopes;
@property (nonatomic) unsigned int maximumResultsPerScope;
@property (copy, nonatomic) NSString *searchString;

- (void).cxx_destruct;
- (unsigned long long)_ampAlbumVariantsFromITLibAlbumVariants:(unsigned long long)a0;
- (id)setupAMPLibSearchRequest;

@end
