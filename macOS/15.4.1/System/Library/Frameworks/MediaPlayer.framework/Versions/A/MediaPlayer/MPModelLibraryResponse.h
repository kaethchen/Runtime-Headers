@class NSArray, NSString, MPMediaLibraryConnectionAssertion;

@interface MPModelLibraryResponse : MPModelResponse <MPModelResponseDetailedKeepLocalStatusRequesting>

@property (copy, nonatomic) NSArray *sectionKeepLocalStatusConfigurations;
@property (retain, nonatomic) MPMediaLibraryConnectionAssertion *libraryAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0;
- (void)clearResults;
- (void)_mediaLibraryDidChangeNotification:(id)a0;
- (id)newOperationForDetailedKeepLocalStatusConfigurationForSectionAtIndex:(long long)a0 responseHandler:(id /* block */)a1;

@end
