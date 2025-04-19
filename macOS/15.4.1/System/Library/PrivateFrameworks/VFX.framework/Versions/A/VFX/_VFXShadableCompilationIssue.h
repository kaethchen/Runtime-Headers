@class NSString;
@protocol VFXShadable;

@interface _VFXShadableCompilationIssue : NSObject

@property (readonly, nonatomic) id<VFXShadable> shadable;
@property (readonly, nonatomic) NSString *entryPoint;
@property (readonly, nonatomic) NSString *effectiveModifier;
@property (readonly, nonatomic) NSString *message;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) long long line;

+ (id)issueWithShadable:(id)a0 entryPoint:(id)a1 effectiveModifier:(id)a2 message:(id)a3 line:(long long)a4 type:(unsigned long long)a5;

- (void)dealloc;

@end
