@class NSString;

@interface SKRExecutionContextUpdate : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ provideContextCommand;
    void /* unknown type, empty encoding */ nativeFlowContextCommand;
    void /* unknown type, empty encoding */ nluSystemDialogActs;
    void /* unknown type, empty encoding */ nluActiveTasks;
    void /* unknown type, empty encoding */ nluCompletedTasks;
    void /* unknown type, empty encoding */ undoDirectInvocation;
    void /* unknown type, empty encoding */ rrEntities;
    void /* unknown type, empty encoding */ pommesContext;
    void /* unknown type, empty encoding */ contextUpdateScope;
    void /* unknown type, empty encoding */ restoreSessionForRequestId;
    void /* unknown type, empty encoding */ executedOnRemoteDevice;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
