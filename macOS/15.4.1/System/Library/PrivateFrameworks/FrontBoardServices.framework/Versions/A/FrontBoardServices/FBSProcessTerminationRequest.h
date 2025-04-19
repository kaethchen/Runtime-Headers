@class NSString;
@protocol FBSProcess;

@interface FBSProcessTerminationRequest : NSObject <NSCopying, BSDescriptionProviding>

@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) id<FBSProcess> process;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long reportType;
@property (nonatomic) long long exceptionCode;
@property (copy, nonatomic) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestForProcess:(id)a0 withLabel:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)execute;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
