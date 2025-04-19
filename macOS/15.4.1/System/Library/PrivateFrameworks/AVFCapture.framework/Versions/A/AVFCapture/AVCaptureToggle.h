@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AVCaptureToggle : AVCaptureControl {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _actionLock;
}

@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *actionQueue;
@property (nonatomic, getter=isOn) BOOL on;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *onSymbolName;
@property (readonly, copy, nonatomic) NSString *offSymbolName;
@property (copy, nonatomic) NSString *accessibilityIdentifier;

+ (void)initialize;

- (void)dealloc;
- (id)description;
- (id)initWithLocalizedTitle:(id)a0 onSymbolName:(id)a1 offSymbolName:(id)a2;
- (void)setActionQueue:(id)a0 action:(id /* block */)a1;

@end
