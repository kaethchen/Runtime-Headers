@interface _EARArtifact : NSObject {
    struct shared_ptr<quasar::artifact::Artifact> { struct Artifact *__ptr_; struct __shared_weak_count *__cntrl_; } _artifact;
}

+ (void)initialize;
+ (BOOL)isValid:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)write:(id)a0;
- (void)minimize;
- (id)getInfo:(id)a0;
- (id)getVersion;
- (BOOL)isEquivalentTo:(id)a0;
- (id)getContent:(id)a0;
- (id)getLocale;
- (BOOL)hasContent:(id)a0;
- (BOOL)hasInfo:(id)a0;
- (id)initWithAcceptedContent:(id)a0 acceptedInfo:(id)a1 dependent:(id)a2;
- (BOOL)isMinimalistic;
- (BOOL)supportsContent:(id)a0;
- (BOOL)supportsInfo:(id)a0;

@end
