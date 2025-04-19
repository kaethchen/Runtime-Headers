@class _TtC12PhotosUICore40LemonadeMemoriesCreationButtonValidation;

@interface PXLemonadeMemoriesCreationButtonValidation : NSObject

@property (retain, nonatomic) _TtC12PhotosUICore40LemonadeMemoriesCreationButtonValidation *validation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)fetchMemoryCreationButtonAvailabilityWithCompletionHandler:(id /* block */)a0;
- (void)invalidateObservationForObservationRequestIdentifier:(id)a0;
- (id)observeMemoryCreationButtonAvailabilityWithUpdateHandler:(id /* block */)a0;

@end
