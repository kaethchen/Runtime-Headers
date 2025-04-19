@class NSString, FBKFormResponse, FBKFeedbackFollowup, NSDate, NSNumber;

@interface FBKFilePromise : FBKManagedFeedbackObject <FBKDownloadableFilePromise>

@property (retain, nonatomic) NSNumber *deviceID;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSDate *updatedAt;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) long long size;
@property (retain, nonatomic) NSNumber *statusEnum;
@property (retain, nonatomic) FBKFormResponse *formResponse;
@property (retain, nonatomic) FBKFeedbackFollowup *feedbackFollowup;
@property (nonatomic) long long state;
@property (readonly, nonatomic) NSString *UUIDString;
@property (readonly, nonatomic) NSDate *createdAtDate;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) NSString *localizedDownloadErrorString;
@property (readonly, nonatomic) long long status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)displaySortDescriptors;
+ (unsigned long long)downloadStateWithUUID:(id)a0 state:(long long)a1 creationDate:(id)a2 contentItem:(id)a3;
+ (id)localizedDownloadErrorStringForState:(unsigned long long)a0;

@end
