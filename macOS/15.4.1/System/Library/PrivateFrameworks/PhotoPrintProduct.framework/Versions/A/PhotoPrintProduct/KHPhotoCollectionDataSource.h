@protocol KHPhotoGroupProtocol;

@interface KHPhotoCollectionDataSource : NSObject

@property (readonly, nonatomic) id<KHPhotoGroupProtocol> photoGroup;

+ (id)dataSourceWithPhotoGroup:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (long long)numberOfSections;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)initWithPhotoGroup:(id)a0;
- (id)photoAtIndexPath:(id)a0;

@end
