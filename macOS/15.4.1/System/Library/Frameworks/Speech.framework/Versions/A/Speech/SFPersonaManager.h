@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface SFPersonaManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSSet *personaIds;

+ (id)sharedInstance;
+ (id)currentPersonaId;
+ (void)runAsPersona:(id)a0 block:(id /* block */)a1;

- (void).cxx_destruct;
- (id)_initWithQueue:(id)a0;
- (void)_initializeUserProfileStore;
- (void)_refreshPersonaIds;
- (BOOL)personaMatchesEnrolledUser:(id)a0;

@end
