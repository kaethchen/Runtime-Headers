@interface SnapshotRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) id /* block */ snapshotSizeCalculator;

+ (id)requestWithURL:(id)a0 snapshotSizeCalculator:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;
- (id)initWithURL:(id)a0 snapshotSizeCalculator:(id /* block */)a1;

@end
