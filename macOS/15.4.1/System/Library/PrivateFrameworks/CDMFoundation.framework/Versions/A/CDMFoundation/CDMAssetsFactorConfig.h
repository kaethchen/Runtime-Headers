@class NSMutableDictionary;

@interface CDMAssetsFactorConfig : NSObject

@property (readonly, nonatomic) NSMutableDictionary *factorToFoldersMapping;
@property (readonly, nonatomic) NSMutableDictionary *factorToIsRequiredMapping;

- (void).cxx_destruct;
- (id)initWithFactorToFoldersMapping:(id)a0;
- (void)addEntriesFromCDMAssetsFactorConfig:(id)a0;
- (id)getAllFactors;
- (id)getFactorToFoldersMapping;
- (id)getFactorToIsRequiredMapping;
- (id)getFoldersForFactor:(id)a0;
- (BOOL)isFactorRequired:(id)a0;
- (void)setFactorToIsRequiredMapping:(id)a0;
- (void)setIsRequiredForFactor:(id)a0 isRequired:(BOOL)a1;

@end
