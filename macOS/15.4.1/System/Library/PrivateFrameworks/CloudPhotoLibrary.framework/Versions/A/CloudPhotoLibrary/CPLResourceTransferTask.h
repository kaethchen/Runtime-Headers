@class NSString, CPLResourceTransferTaskOptions, CPLResource;

@interface CPLResourceTransferTask : NSObject <NSSecureCoding> {
    CPLResourceTransferTaskOptions *_options;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) CPLResource *resource;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (nonatomic, getter=isHighPriority) BOOL highPriority;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) CPLResourceTransferTaskOptions *options;
@property (retain, nonatomic) NSString *clientBundleID;
@property (nonatomic) unsigned long long intent;

+ (BOOL)isForegroundOperationForIntent:(unsigned long long)a0;
+ (id)descriptionForIntent:(unsigned long long)a0;
+ (BOOL)isHighPriorityForIntent:(unsigned long long)a0;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (Class)classForKeyedArchiver;
- (void)launch;
- (void)setTaskIdentifier:(id)a0;
- (void)cancelTask;
- (id)initWithResource:(id)a0 taskIdentifier:(id)a1;

@end
