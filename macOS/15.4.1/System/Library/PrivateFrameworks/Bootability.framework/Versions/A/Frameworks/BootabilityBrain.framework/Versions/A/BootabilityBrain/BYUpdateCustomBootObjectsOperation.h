@class NSMutableArray;

@interface BYUpdateCustomBootObjectsOperation : BYOperation

@property (retain) NSMutableArray *mountedVolumes;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (BOOL)required;
- (id)initWithRequest:(id)a0;
- (id)_mountVolume:(id)a0;
- (void)cleanUpAfterSuccess:(BOOL)a0;

@end
