@class WKURLActivity, NSUUID;

@interface WKGroupSession : NSObject {
    void /* unknown type, empty encoding */ groupSession;
    void /* unknown type, empty encoding */ activityWrapper;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ newActivityCallback;
    void /* unknown type, empty encoding */ stateChangedCallback;
}

@property (nonatomic, readonly) WKURLActivity *activity;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) long long state;
@property (nonatomic, copy) id /* block */ newActivityCallback;
@property (nonatomic, copy) id /* block */ stateChangedCallback;

- (id)init;
- (void).cxx_destruct;
- (void)join;
- (void)leave;
- (void)coordinateWithCoordinator:(id)a0;

@end
