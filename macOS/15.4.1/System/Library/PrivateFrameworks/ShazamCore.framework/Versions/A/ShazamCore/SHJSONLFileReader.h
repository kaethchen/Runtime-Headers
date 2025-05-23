@protocol SHJSONLDataDetokenizerDelegate;

@interface SHJSONLFileReader : NSObject

@property (weak) id<SHJSONLDataDetokenizerDelegate> delegate;

- (void).cxx_destruct;
- (BOOL)loadData:(id)a0 withCompression:(int)a1 error:(id *)a2;
- (BOOL)loadDataFromURL:(id)a0 withCompression:(int)a1 error:(id *)a2;
- (id)inputForAlgorithm:(int)a0 error:(id *)a1;
- (BOOL)loadDataFromURL:(id)a0 error:(id *)a1;

@end
