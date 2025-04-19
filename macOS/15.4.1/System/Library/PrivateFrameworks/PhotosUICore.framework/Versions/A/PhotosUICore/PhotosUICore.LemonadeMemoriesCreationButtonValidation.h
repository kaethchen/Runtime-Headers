@interface PhotosUICore.LemonadeMemoriesCreationButtonValidation : NSObject {
    void /* unknown type, empty encoding */ photoLibrary;
    void /* unknown type, empty encoding */ $__lazy_storage_$_availabilityManager;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ updateHandlers;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (void)fetchMemoryCreationButtonAvailabilityWithCompletionHandler:(void (^)(BOOL))a0;
- (void)invalidateObservationFor:(id)a0;
- (id)observeMemoryCreationButtonAvailabilityWithUpdateHandler:(id /* block */)a0;

@end
