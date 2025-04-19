@class NSString;

@interface BRFrameworkContainerHelper : NSObject <BRContainerHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHelper;

- (void)_resolveItemIdentifierAtURL:(id)a0 withHandler:(id /* block */)a1;
- (unsigned short)br_capabilityToMoveFromURL:(id)a0 toNewParent:(id)a1 error:(id *)a2;
- (BOOL)canFetchAllContainersByID;
- (id)fetchAllContainersByIDWithError:(id *)a0;
- (id)fetchContainerForMangledID:(id)a0 personaID:(id)a1;
- (id)itemIDForURL:(id)a0 error:(id *)a1;

@end
