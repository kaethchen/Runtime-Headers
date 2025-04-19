@class NSSet, CATRemoteTaskOperation;
@protocol CRKExpiredCoursesInteractionDelegate, CRKRequestPerformingProtocol;

@interface CRKExpiredCoursesInteraction : CATOperation {
    CATRemoteTaskOperation *mLeaveControlGroupsOperation;
    BOOL mIsPrompting;
}

@property (readonly, nonatomic) id<CRKExpiredCoursesInteractionDelegate> delegate;
@property (readonly, nonatomic) id<CRKRequestPerformingProtocol> studentDaemonProxy;
@property (readonly, nonatomic) NSSet *courses;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)main;
- (id)initWithStudentDaemonProxy:(id)a0 delegate:(id)a1 courses:(id)a2;
- (void)leaveControlGroupsOperationDidFinish:(id)a0;
- (void)removeCourses:(id)a0;

@end
