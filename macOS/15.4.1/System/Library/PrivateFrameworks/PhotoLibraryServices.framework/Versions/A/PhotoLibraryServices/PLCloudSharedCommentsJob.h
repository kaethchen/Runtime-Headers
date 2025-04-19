@class NSArray, NSString, NSDictionary;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSArray *msASComments;
@property (retain, nonatomic) NSString *commentGUID;
@property (retain, nonatomic) NSString *assetGUID;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) NSDictionary *mstreamdInfoDictionary;

+ (void)assetsdLocallyProcessAddedComments:(id)a0 assetGUID:(id)a1 albumGUID:(id)a2 info:(id)a3 libraryServicesManager:(id)a4;
+ (void)deleteSharedCommentFromServer:(id)a0;
+ (void)locallyProcessAddedComments:(id)a0 assetGUID:(id)a1 albumGUID:(id)a2 info:(id)a3;
+ (void)locallyProcessDeletedComments:(id)a0 info:(id)a1;
+ (void)publishCommentToServer:(id)a0;

- (id)description;
- (void)run;
- (void).cxx_destruct;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)a0;
- (void)executeDeleteCommentFromServer;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)executePublishCommentToServer;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)runDaemonSide;
- (BOOL)shouldArchiveXPCToDisk;

@end
