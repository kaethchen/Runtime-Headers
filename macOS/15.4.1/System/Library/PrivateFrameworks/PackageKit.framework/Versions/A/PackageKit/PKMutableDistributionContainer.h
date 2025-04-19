@class NSError;

@interface PKMutableDistributionContainer : PKDistributionContainer

@property (retain) NSError *error;

- (void)dealloc;
- (BOOL)commitReturningError:(id *)a0;
- (void)setDistribution:(id)a0;
- (BOOL)setStringsData:(id)a0 forLocalization:(id)a1;
- (id)initForWritingToArchive:(id)a0;
- (id)initForWritingToPath:(id)a0;
- (BOOL)setDistributionFromContainer:(id)a0;
- (BOOL)setResourceData:(id)a0 forKey:(id)a1 forLocalization:(id)a2;
- (BOOL)storeResourcesAtPath:(id)a0 forLocalization:(id)a1;

@end
