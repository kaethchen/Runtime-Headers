@class NSObject;
@protocol OS_dispatch_queue;

@interface TIFilterParameterLoader : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *loadQueue;

- (id)init;
- (void).cxx_destruct;
- (id)loadCandidateFilterSpecificationForLanguageIdentifier:(id)a0;
- (void)loadCandidateFilterSpecificationForLanguageIdentifier:(id)a0 targetQueue:(id)a1 completion:(id /* block */)a2;
- (id)loadContentsForPlistWithLanguage:(id)a0;
- (id)parameterOverridesFolderURL;
- (id)parameterPlistForLanguage:(id)a0;
- (id)universalParameterPlist;

@end
