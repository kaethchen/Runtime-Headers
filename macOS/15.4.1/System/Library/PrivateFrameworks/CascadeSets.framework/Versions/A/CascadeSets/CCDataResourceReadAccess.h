@class NSString, BMAccessClient, BMResourceContainer;

@interface CCDataResourceReadAccess : NSObject {
    NSString *_useCase;
    BMAccessClient *_accessClient;
    BMResourceContainer *_containerOverride;
}

+ (id)defaultInstanceWithUseCase:(id)a0;

- (void).cxx_destruct;
- (id)databaseReadAccessForSet:(id)a0 error:(id *)a1;
- (BOOL)_enumerateReadableSets:(id *)a0 resourceOptions:(unsigned char)a1 itemType:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (id)_requestAccessToResource:(id)a0 outAccessAssertion:(id *)a1 error:(id *)a2;
- (id)_requestAccessToSetsDirectoryWithOptions:(unsigned char)a0 outAccessAssertion:(id *)a1 error:(id *)a2;
- (BOOL)_shouldSkipAccessRequestForResource:(id)a0;
- (BOOL)enumerateReadableSets:(id *)a0 withOptions:(unsigned short)a1 itemType:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (id)initWithContainerOverride:(id)a0 useCase:(id)a1;

@end
