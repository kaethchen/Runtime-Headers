@class PLPhotoLibraryAttributesChanges, NSString;
@protocol PLClientAuthorization;

@interface PLPhotoLibraryAttributesChangeRequestServiceHandler : NSObject <PLChangeRequestServiceHandling> {
    id<PLClientAuthorization> _clientAuthorization;
}

@property (readonly) PLPhotoLibraryAttributesChanges *changes;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)applyChangesWithLibrary:(id)a0 error:(id *)a1;
- (id)initWithPhotoLibraryAttributesChanges:(id)a0 clientAuthorization:(id)a1;
- (BOOL)_updateDataclass:(id)a0 onAccount:(id)a1 enabled:(BOOL)a2;
- (BOOL)validateChangesWithLibrary:(id)a0 error:(id *)a1;

@end
