@class NSString;

@interface BGContinuedProcessingTaskRequest : BGTaskRequest

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

@end
