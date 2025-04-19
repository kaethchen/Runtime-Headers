@class NSArray;

@interface ASDInstallManifestRequestResponse : ASDRequestResponse

@property (readonly, nonatomic) NSArray *results;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithResults:(id)a0;

@end
