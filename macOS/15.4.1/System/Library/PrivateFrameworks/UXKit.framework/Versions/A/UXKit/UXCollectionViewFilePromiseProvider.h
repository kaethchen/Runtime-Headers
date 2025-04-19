@class NSArray, NSMutableArray;

@interface UXCollectionViewFilePromiseProvider : NSFilePromiseProvider {
    NSMutableArray *_auxiliaryFilePromiseProviders;
}

@property (readonly, copy, nonatomic) NSArray *auxiliaryFilePromiseProviders;

- (void).cxx_destruct;
- (void)addAuxiliaryFilePromiseProvider:(id)a0;

@end
