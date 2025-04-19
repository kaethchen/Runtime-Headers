@class NSString;

@interface bnnsIrMappedWeight : NSObject {
    void *_weightData;
}

@property (readonly, nonatomic) NSString *weightFilePath;
@property (nonatomic) unsigned long long weightSize;

- (void)dealloc;
- (void).cxx_destruct;
- (void *)getWeightData;
- (id)initWithWeightFile:(id)a0 errOut:(id *)a1;
- (void)ummapForWeight;

@end
