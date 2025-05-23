@class PXContextualMemoriesSettings, NSMutableArray;

@interface PXContextualMemoriesSettingsController : NSObject

@property (readonly, nonatomic) PXContextualMemoriesSettings *settings;
@property (nonatomic, getter=isRequestingUpdates) BOOL requestingUpdates;
@property (retain, nonatomic) NSMutableArray *completionHandlers;
@property (retain, nonatomic) NSMutableArray *registrationIdentifiers;

+ (id)sharedController;

- (id)init;
- (void).cxx_destruct;
- (void)requestUpdatedContextualMemoriesSettingsWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
