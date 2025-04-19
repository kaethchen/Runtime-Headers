@class NSArray, NSString, NSMutableSet;
@protocol MCActivityTarget;

@interface _MCActivityMonitorMultiTarget : NSObject <MCActivityTarget> {
    NSMutableSet *_allTargets;
}

@property (retain, nonatomic) id<MCActivityTarget> primaryTarget;
@property (readonly, copy, nonatomic) NSArray *allTargets;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)addActivityTarget:(id)a0;
- (BOOL)removeActivityTarget:(id)a0;

@end
