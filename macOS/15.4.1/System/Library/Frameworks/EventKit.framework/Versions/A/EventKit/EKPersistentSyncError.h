@interface EKPersistentSyncError : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (int)errorCode;
- (void)setErrorCode:(int)a0;
- (int)entityType;
- (int)errorType;
- (void)setErrorType:(int)a0;
- (void)setUserInfoData:(id)a0;
- (id)userInfoData;

@end
