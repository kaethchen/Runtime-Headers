@class NSString, PLPhotoLibraryAttributesChanges;
@protocol PLChangesForServiceHandling;

@interface PHPhotoLibraryAttributesChangeRequest : NSObject <PHChangeRequestCore> {
    PLPhotoLibraryAttributesChanges *_changes;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *userDescription;
@property (nonatomic) BOOL enableCloudSync;
@property (nonatomic) unsigned short cloudResourcePrefetchMode;
@property (readonly, nonatomic) id<PLChangesForServiceHandling> changesForServiceHandler;
@property (readonly, nonatomic) NSString *changeTypeForSummary;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)didSendChangeToServiceHandlerWithResult:(BOOL)a0;
- (BOOL)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (BOOL)prepareForServicePreflightCheck:(id *)a0;

@end
