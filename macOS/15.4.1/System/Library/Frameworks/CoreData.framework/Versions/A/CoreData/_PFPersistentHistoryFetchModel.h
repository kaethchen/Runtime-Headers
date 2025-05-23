@class NSString;

@interface _PFPersistentHistoryFetchModel : NSObject <_PFAncillaryModelFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_invalidateStaticCaches;
+ (unsigned long long)ancillaryEntityCount;
+ (unsigned long long)ancillaryEntityOffset;
+ (id)ancillaryModelNamespace;


@end
