@class NSString;

@interface _BGContinuedProcessingTaskRequest : BGTaskRequest

@property (copy, nonatomic) NSString *iconBundleIdentifier;
@property (copy, nonatomic) NSString *applicationBundleIdentifier;
@property (copy) NSString *title;
@property (copy) NSString *reason;

+ (Class)_correspondingTaskClass;
+ (id)_requestFromActivity:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)_activity;
- (id)initWithIdentifier:(id)a0 iconBundleIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 iconBundleIdentifier:(id)a1 applicationBundleIdentifier:(id)a2;

@end
