@class NSTimer;
@protocol PXPerson;

@interface PXPersonImageRequest : NSObject

@property (retain, nonatomic) NSTimer *imageLoadInvalidationTimer;
@property (nonatomic) unsigned long long imageRequestTag;
@property (readonly, nonatomic) id<PXPerson> person;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithPerson:(id)a0;
- (void)requestFaceCropWithOptions:(id)a0 timeout:(double)a1 resultHandler:(id /* block */)a2;

@end
