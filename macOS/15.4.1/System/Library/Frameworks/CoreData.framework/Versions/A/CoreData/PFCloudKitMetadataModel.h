@class NSString;

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityCount;
+ (unsigned long long)ancillaryEntityOffset;
+ (id)ancillaryModelNamespace;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0;
+ (id)createMapOfEntityIDToPrimaryKeySetForObjectIDs:(id)a0 fromStore:(id)a1;


@end
