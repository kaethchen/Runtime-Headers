@class NSProgress, NSString;
@protocol PXInfoProvider, PXInfoUpdaterObserver;

@interface PXInfoUpdater : NSObject {
    struct { BOOL priorityForInfoRequestOfKind; } _infoProviderRespondsTo;
    struct { BOOL shouldUpdate; } _observerRespondsTo;
}

@property (retain, nonatomic) id info;
@property (nonatomic) BOOL shouldUpdateInfo;
@property (nonatomic) BOOL isUpdatingInfo;
@property (nonatomic) long long currentUpdateGeneration;
@property (nonatomic) long long currentUpdatePriority;
@property (retain, nonatomic) NSProgress *currentUpdateProgress;
@property (readonly, weak, nonatomic) id<PXInfoProvider> infoProvider;
@property (readonly, copy, nonatomic) NSString *infoKind;
@property (weak, nonatomic) id<PXInfoUpdaterObserver> observer;

- (id)init;
- (void).cxx_destruct;
- (void)_handleCurrentUpdateWithInfo:(id)a0 generation:(long long)a1;
- (void)_updateInfo;
- (void)_updateInfoIfNeeded;
- (id)initWithInfoProvider:(id)a0 infoKind:(id)a1;
- (void)invalidateInfo;
- (void)performBlockWhenDoneUpdating:(id /* block */)a0;

@end
