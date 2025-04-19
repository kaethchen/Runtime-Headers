@class PHPhotoLibrary, CLSPersonIdentity, CLSServiceManager;

@interface CLSInputPeopleClue : CLSInputClue {
    CLSServiceManager *_serviceManager;
}

@property (retain, nonatomic) CLSPersonIdentity *person;
@property (weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) unsigned long long numberOfFaces;
@property (nonatomic) BOOL includeMergeCandidates;

+ (id)clueWithConsolidatedPersonLocalIdentifier:(id)a0 inPhotoLibrary:(id)a1 serviceManager:(id)a2;
+ (id)clueWithPeople:(id)a0 serviceManager:(id)a1;
+ (id)clueWithPersonContactIdentifier:(id)a0 inPhotoLibrary:(id)a1 serviceManager:(id)a2;
+ (id)clueWithPersonLocalIdentifier:(id)a0 inPhotoLibrary:(id)a1 serviceManager:(id)a2;
+ (id)cluesWithConsolidatedPersonLocalIdentifiers:(id)a0 inPhotoLibrary:(id)a1 serviceManager:(id)a2;
+ (id)cluesWithPeoples:(id)a0 serviceManager:(id)a1;
+ (id)cluesWithPersonLocalIdentifiers:(id)a0 inPhotoLibrary:(id)a1 serviceManager:(id)a2;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (void)_prepareWithProgressBlock:(id /* block */)a0;

@end
