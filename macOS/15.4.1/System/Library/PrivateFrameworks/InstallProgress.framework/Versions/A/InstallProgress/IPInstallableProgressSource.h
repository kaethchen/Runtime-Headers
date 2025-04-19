@class IPInstallableStateSource;
@protocol IPProgressObserver;

@interface IPInstallableProgressSource : NSObject {
    BOOL _resumed;
}

@property (readonly) IPInstallableStateSource *installableStateSource;
@property (weak) id<IPProgressObserver> observer;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)resume;
- (id)collationKey;
- (void)notifyOfUpdate:(id)a0;
- (id)currentProgressWithError:(id *)a0;
- (void)finishWithReason:(unsigned long long)a0;
- (id)initWithStateSource:(id)a0;

@end
