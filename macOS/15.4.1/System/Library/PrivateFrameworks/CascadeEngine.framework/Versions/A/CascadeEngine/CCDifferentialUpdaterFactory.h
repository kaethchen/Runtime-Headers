@class CCDataResourceWriteAccess;
@protocol CCSetChangeNotifierProtocol;

@interface CCDifferentialUpdaterFactory : NSObject {
    CCDataResourceWriteAccess *_writeAccess;
    id<CCSetChangeNotifierProtocol> _changeNotifier;
    double _timeout;
}

- (void).cxx_destruct;
- (id)initWithWriteAccess:(id)a0 changeNotifier:(id)a1 timeout:(double)a2;
- (id)updaterForSet:(id)a0 withRequest:(id)a1;

@end
