@class CIImage, NSMutableArray, IKImageEditPanel;

@interface IKImageEditDSHandler : NSObject {
    IKImageEditPanel *_panel;
    struct CGImage { } *_dataSourceImage;
    CIImage *_ciImage;
}

@property (nonatomic) id dataSource;
@property BOOL dataSourceIsIKImageView;
@property (readonly) NSMutableArray *filterArray;

- (void)dealloc;
- (void)finalize;
- (void)cleanup;
- (void)setFilterArray:(id)a0;
- (id)delegateForIKFilterChain;
- (void)filter:(id)a0 setValue:(id)a1 forKey:(id)a2 filterChain:(id)a3;
- (id)filter:(id)a0 valueForKey:(id)a1;
- (void)filterAdded:(id)a0 filterChain:(id)a1;
- (void)filterChainChanged:(id)a0;
- (void)filterRemoved:(id)a0 filterChain:(id)a1;
- (id)initWithPanel:(id)a0;
- (id)metaDataFromCGImageRef;
- (void)setSingleEffectFilterArray:(id)a0;
- (void)updateDataSourceImage:(id)a0;
- (void)updateFilter:(id)a0 withParameters:(id)a1 filterChain:(id)a2;

@end
